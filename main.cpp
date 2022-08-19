#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct PlayerRecord {
	string key;
	int rowNumber = -1;
	int playerID = -1;
	string name;
	int age = -1;
	string photoURL;
	string nationality;
	string flagURL;
	int overall = -1;
	int potential = -1;
	string club;
	string clubLogoURL;
	string value;
	string wage;
	int special = -1;
	string preferredFoot;
	int internationalReputation = -1;
	int weakFoot = -1;
	int skillMoves = -1;
	string workRate;

	void display() {
		cout << "Unique Key [LB]: " << key << endl
			 << "Sheet Row No.: " << rowNumber << endl
			 << "Player ID: " << playerID << endl
			 << "Full Name: " << name << endl
			 << "Age: " << age << endl
		   	 << "Photo URL: " << photoURL << endl
			 << "Nationality: " << nationality << endl
			 << "Flag URL: " << flagURL << endl
			 << "Overall Score: " << overall << endl
			 << "Potential: " << potential << endl
			 << "Club: " << club << endl
			 << "Club Logo URL: " << clubLogoURL << endl
			 << "Value: " << value << endl
			 << "Wage: " << wage << endl
			 << "Special: " << special << endl
			 << "Preferred Foot: " << preferredFoot << endl
			 << "International Reputation: " << internationalReputation << endl
			 << "Weak Foot: " << weakFoot << endl
			 << "Skill Moves: " << skillMoves << endl
			 << "Work Rate: " << workRate << endl;
	}
};

vector<pair<string, PlayerRecord>> readFile(string fileName) {
	fstream file;
	vector<pair<string, PlayerRecord>> playerMap;
	PlayerRecord playerRecord;

	file.open(fileName, ios::in);
	if (file.is_open()) {
		string line;

		while (getline(file, line)) {
			stringstream column(line);
			string tmpStoi;

			getline(column, playerRecord.key, ' ');

			getline(column, tmpStoi, ' ');
			playerRecord.rowNumber = stoi(tmpStoi);

			getline(column, tmpStoi, ' ');
			playerRecord.playerID = stoi(tmpStoi);

			getline(column, playerRecord.name, ' ');

			getline(column, tmpStoi, ' ');
			playerRecord.age = stoi(tmpStoi);

			getline(column, playerRecord.photoURL, ' ');
			getline(column, playerRecord.nationality, ' ');
			getline(column, playerRecord.flagURL, ' ');

			getline(column, tmpStoi, ' ');
			playerRecord.overall = stoi(tmpStoi);

			getline(column, tmpStoi, ' ');
			playerRecord.potential = stoi(tmpStoi);

			getline(column, playerRecord.club, ' ');
			getline(column, playerRecord.clubLogoURL, ' ');
			getline(column, playerRecord.value, ' ');
			getline(column, playerRecord.wage, ' ');

			getline(column, tmpStoi, ' ');
			playerRecord.special = stoi(tmpStoi);

			getline(column, playerRecord.preferredFoot, ' ');

			getline(column, tmpStoi, ' ');
			playerRecord.internationalReputation = stoi(tmpStoi);

			getline(column, tmpStoi, ' ');
			playerRecord.weakFoot = stoi(tmpStoi);

			getline(column, tmpStoi, ' ');
			playerRecord.skillMoves = stoi(tmpStoi);

			getline(column, playerRecord.workRate, ' ');

			playerMap.push_back(make_pair(playerRecord.key, playerRecord));
		}
		file.close();
	}
	return playerMap;
}

struct Node {
	pair<string, PlayerRecord> data;
	Node* left;
	Node* right;
	Node(pair<string, PlayerRecord> _data): data(_data), left(NULL), right(NULL) {}
};

Node* addNode(Node* root, pair<string, PlayerRecord> newNode) {
	if (root == NULL) root = new Node(newNode);
	else if (newNode.first < root->data.first) root->left = addNode(root->left, newNode);
	else if (newNode.first > root->data.first) root->right = addNode(root->right, newNode);
	return root;
}

int nodeHeight(Node* node) {
	if (node == NULL) return -1;
	int lHeight = nodeHeight(node->left);
	int rHeight = nodeHeight(node->right);

	if (lHeight > rHeight) return lHeight + 1;
	else return rHeight + 1;
}

void l_rotation(Node* &root) {
	Node* tmp = root->left;
	root->left = tmp->right;
	tmp->right = root;
	root = tmp;
}

void r_rotation(Node* &root) {
	Node* tmp = root->right;
	root->right = tmp->left;
	tmp->left = root;
	root = tmp;
}

void ll_rotation(Node* &root) {
	r_rotation(root->left);
	l_rotation(root);
}

void rr_rotation(Node* &root) {
	l_rotation(root->right);
	r_rotation(root);
}

Node* addNodeAVL(Node* &root, pair<string, PlayerRecord> newNode) {
	if (root == NULL) root = new Node(newNode);
	else if (newNode.first < root->data.first) {
		root->left = addNodeAVL(root->left, newNode);
		if ((nodeHeight(root->left) - nodeHeight(root->right)) == 2) {
			if (newNode.first < root->left->data.first)
				l_rotation(root);
			else ll_rotation(root);
		}
	}
	else if (newNode.first > root->data.first) {
		root->right = addNodeAVL(root->right, newNode);
		if ((nodeHeight(root->right) - nodeHeight(root->left)) == 2) {
			if (newNode.first > root->right->data.first)
				r_rotation(root);
			else rr_rotation(root);
		}
	}
	return root;
}

Node* growATree(vector<pair<string, PlayerRecord>> PlayerMap, string type) {
	Node* root = new Node(PlayerMap[0]);
	for (int player = 1; player < PlayerMap.size(); player++)
		if (type == "BalancedTree")
			addNode(root, PlayerMap.at(player));
		else if (type == "AVLTree")
			addNodeAVL(root, PlayerMap.at(player));
	return root;
}

void displayTree(Node* root, int width) {
	if (root == NULL) {
		cout << setw(width) << "*" << endl;
		return;
	}
	displayTree(root->right, width + 6);
	cout << setw(width) << root->data.first << "<" << endl;
	displayTree(root->left, width + 6);
}

void printPreorder(Node* root) {
	if (root == NULL) return;
	cout << "Node Value: " << root->data.first << endl;
	root->data.second.display();
	cout << "************************************************************" << endl << endl;
	printPreorder(root->left);
	printPreorder(root->right);
}

void balancedTree(Node* root) {
	
	cout << "============================================================" << endl
		 << "BALANCED BINARY TREE" << endl
		 << "============================================================" << endl;
	
    displayTree(root, 0);
	
    cout << endl 
         << "============================================================" << endl
		 << "PREORDER" << endl
		 << "============================================================" << endl;
	
    printPreorder(root);
}

void AVLTree(Node* root) {
	cout << "============================================================" << endl
		 << "AVL TREE" << endl
		 << "============================================================" << endl;
	
    displayTree(root, 0);
	
    cout << endl 
         << "============================================================" << endl
		 << "PREORDER" << endl
		 << "============================================================" << endl;
	
    printPreorder(root);
}

int main() {
	vector<pair<string, PlayerRecord>> PlayerMap = readFile("data.txt");
	Node* root;

	int choice;
	
	do {
		cout << "1 - Show Balanced Tree" << endl
			 << "2 - Show AVL Tree" << endl
			 << "0 - Exit" << endl
			 << "Enter your choice... ";
		cin >> choice;

		if (choice == 1) {
			cout << "Balanced Tree" << endl << endl;
			balancedTree(root = growATree(PlayerMap, "BalancedTree"));
		} else if (choice == 2) {
			cout << "AVL Tree" << endl << endl;
			AVLTree(root = growATree(PlayerMap, "AVLTree"));
		}
	} while (choice != 0);

	return 0;
}