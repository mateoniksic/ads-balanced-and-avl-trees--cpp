![Social Preview](https://user-images.githubusercontent.com/57192709/226617614-f14b1421-24a1-4ab3-bb85-0c2033356b6f.png)
# What is project balanced and avl trees?
Project balanced and avl trees is a program that loads data from .txt file and builds balanced and avl trees based on unique key.

# How to start the application?
1. **Clone repository**
2. **Run command:** `./App` in linux shell`

# Sneak peek

```c++
============================================================
BALANCED BINARY TREE
============================================================
                       *
              84+3<
                             *
                    80+3<
                             *
        79+3<
                             *
                    77+3<
                                   *
                          73+3<
                                         *
                                72+3<
                                               *
                                      70+2<
                                               *
              67+3<
                             *
                    67+2<
                                   *
                          66+5<
                                   *
  61+3<
                             *
                    60+3<
                             *
              59+2<
                       *
        57+3<
                 *
53+3<
                       *
              51+3<
                             *
                    51+2<
                                         *
                                45+2<
                                         *
                          42+2<
                                         *
                                41+2<
                                               *
                                      40+2<
                                                     *
                                            38+2<
                                                     *
        37+2<
                       *
              36+2<
                             *
                    35+2<
                             *
  34+2<
                 *
        33+2<
                       *
              32+2<
                                   *
                          30+2<
                                   *
                    29+2<
                             *
```

```c++
============================================================
AVL TREE
============================================================
                       *
              84+3<
                             *
                    80+3<
                             *
        79+3<
                             *
                    77+3<
                             *
              73+3<
                             *
                    72+3<
                                   *
                          70+2<
                                   *
  67+3<
                       *
              67+2<
                             *
                    66+5<
                             *
        61+3<
                             *
                    60+3<
                             *
              59+2<
                       *
57+3<
                             *
                    53+3<
                             *
              51+3<
                             *
                    51+2<
                             *
        45+2<
                             *
                    42+2<
                             *
              41+2<
                             *
                    40+2<
                                   *
                          38+2<
                                   *
  37+2<
                       *
              36+2<
                             *
                    35+2<
                             *
        34+2<
                             *
                    33+2<
                             *
              32+2<
                                   *
                          30+2<
                                   *
                    29+2<
                             *
```

```c++
============================================================
PREORDER
============================================================
Node Value: 57+3
Unique Key [LB]: 57+3
Sheet Row No.: 47
Player ID: 192505
Full Name: R.Lukaku
Age: 25
Photo URL: https://cdn.sofifa.org/players/4/19/192505.png
Nationality: Belgium
Flag URL: https://cdn.sofifa.org/flags/7.png
Overall Score: 87
Potential: 89
Club: ManchesterUnited
Club Logo URL: https://cdn.sofifa.org/teams/2/light/11.png
Value: €62.5M
Wage: €230K
Special: 2031
Preferred Foot: Left
International Reputation: 3
Weak Foot: 3
Skill Moves: 3
Work Rate: Medium/Medium
************************************************************

Node Value: 37+2
Unique Key [LB]: 37+2
Sheet Row No.: 18130
Player ID: 241276
Full Name: F.Sinclair-Smith
Age: 17
Photo URL: https://cdn.sofifa.org/players/4/19/241276.png
Nationality: England
Flag URL: https://cdn.sofifa.org/flags/14.png
Overall Score: 49
Potential: 67
Club: Blackpool
Club Logo URL: https://cdn.sofifa.org/teams/2/light/1926.png
Value: €60K
Wage: €1K
Special: 1247
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 34+2
Unique Key [LB]: 34+2
Sheet Row No.: 18084
Player ID: 244411
Full Name: KwonKiPyo
Age: 21
Photo URL: https://cdn.sofifa.org/players/4/19/244411.png
Nationality: KoreaRepublic
Flag URL: https://cdn.sofifa.org/flags/167.png
Overall Score: 50
Potential: 59
Club: PohangSteelers
Club Logo URL: https://cdn.sofifa.org/teams/2/light/1474.png
Value: €50K
Wage: €1K
Special: 1261
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 32+2
Unique Key [LB]: 32+2
Sheet Row No.: 18051
Player ID: 246399
Full Name: C.Björk
Age: 18
Photo URL: https://cdn.sofifa.org/players/4/19/246399.png
Nationality: Sweden
Flag URL: https://cdn.sofifa.org/flags/46.png
Overall Score: 50
Potential: 70
Club: IFKNorrköping
Club Logo URL: https://cdn.sofifa.org/teams/2/light/702.png
Value: €60K
Wage: €1K
Special: 1282
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 2
Work Rate: High/Medium
************************************************************

Node Value: 29+2
Unique Key [LB]: 29+2
Sheet Row No.: 18203
Player ID: 243165
Full Name: N.Christoffersson
Age: 19
Photo URL: https://cdn.sofifa.org/players/4/19/243165.png
Nationality: Sweden
Flag URL: https://cdn.sofifa.org/flags/46.png
Overall Score: 47
Potential: 63
Club: TrelleborgsFF
Club Logo URL: https://cdn.sofifa.org/teams/2/light/703.png
Value: €60K
Wage: €1K
Special: 1098
Preferred Foot: Right
International Reputation: 1
Weak Foot: 2
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 30+2
Unique Key [LB]: 30+2
Sheet Row No.: 18200
Player ID: 231381
Full Name: J.Young
Age: 18
Photo URL: https://cdn.sofifa.org/players/4/19/231381.png
Nationality: Scotland
Flag URL: https://cdn.sofifa.org/flags/42.png
Overall Score: 47
Potential: 62
Club: SwindonTown
Club Logo URL: https://cdn.sofifa.org/teams/2/light/1934.png
Value: €60K
Wage: €1K
Special: 1203
Preferred Foot: Left
International Reputation: 1
Weak Foot: 2
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 33+2
Unique Key [LB]: 33+2
Sheet Row No.: 18204
Player ID: 241638
Full Name: B.Worman
Age: 16
Photo URL: https://cdn.sofifa.org/players/4/19/241638.png
Nationality: England
Flag URL: https://cdn.sofifa.org/flags/14.png
Overall Score: 47
Potential: 67
Club: CambridgeUnited
Club Logo URL: https://cdn.sofifa.org/teams/2/light/1944.png
Value: €60K
Wage: €1K
Special: 1189
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 36+2
Unique Key [LB]: 36+2
Sheet Row No.: 18189
Player ID: 240160
Full Name: A.Kaltner
Age: 18
Photo URL: https://cdn.sofifa.org/players/4/19/240160.png
Nationality: Germany
Flag URL: https://cdn.sofifa.org/flags/21.png
Overall Score: 47
Potential: 61
Club: SpVggUnterhaching
Club Logo URL: https://cdn.sofifa.org/teams/2/light/172.png
Value: €60K
Wage: €1K
Special: 1290
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 35+2
Unique Key [LB]: 35+2
Sheet Row No.: 18205
Player ID: 246268
Full Name: D.Walker-Rice
Age: 17
Photo URL: https://cdn.sofifa.org/players/4/19/246268.png
Nationality: England
Flag URL: https://cdn.sofifa.org/flags/14.png
Overall Score: 47
Potential: 66
Club: TranmereRovers
Club Logo URL: https://cdn.sofifa.org/teams/2/light/15048.png
Value: €60K
Wage: €1K
Special: 1228
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 45+2
Unique Key [LB]: 45+2
Sheet Row No.: 18202
Player ID: 238813
Full Name: J.Lundstram
Age: 19
Photo URL: https://cdn.sofifa.org/players/4/19/238813.png
Nationality: England
Flag URL: https://cdn.sofifa.org/flags/14.png
Overall Score: 47
Potential: 65
Club: CreweAlexandra
Club Logo URL: https://cdn.sofifa.org/teams/2/light/121.png
Value: €60K
Wage: €1K
Special: 1307
Preferred Foot: Right
International Reputation: 1
Weak Foot: 2
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 41+2
Unique Key [LB]: 41+2
Sheet Row No.: 18094
Player ID: 245455
Full Name: M.AlDhafeeri
Age: 19
Photo URL: https://cdn.sofifa.org/players/4/19/245455.png
Nationality: SaudiArabia
Flag URL: https://cdn.sofifa.org/flags/183.png
Overall Score: 50
Potential: 62
Club: AlBatin
Club Logo URL: https://cdn.sofifa.org/teams/2/light/112990.png
Value: €50K
Wage: €1K
Special: 1341
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 3
Work Rate: Medium/Medium
************************************************************

Node Value: 40+2
Unique Key [LB]: 40+2
Sheet Row No.: 18144
Player ID: 243135
Full Name: J.GarciaSossa
Age: 18
Photo URL: https://cdn.sofifa.org/players/4/19/243135.png
Nationality: Bolivia
Flag URL: https://cdn.sofifa.org/flags/53.png
Overall Score: 49
Potential: 70
Club: CDHuachipato
Club Logo URL: https://cdn.sofifa.org/teams/2/light/111327.png
Value: €70K
Wage: €1K
Special: 1287
Preferred Foot: Left
International Reputation: 1
Weak Foot: 3
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 38+2
Unique Key [LB]: 38+2
Sheet Row No.: 18118
Player ID: 243725
Full Name: D.Collins
Age: 17
Photo URL: https://cdn.sofifa.org/players/4/19/243725.png
Nationality: RepublicOfIreland
Flag URL: https://cdn.sofifa.org/flags/25.png
Overall Score: 49
Potential: 62
Club: SligoRovers
Club Logo URL: https://cdn.sofifa.org/teams/2/light/563.png
Value: €50K
Wage: €1K
Special: 1260
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 42+2
Unique Key [LB]: 42+2
Sheet Row No.: 18201
Player ID: 243413
Full Name: D.Walsh
Age: 18
Photo URL: https://cdn.sofifa.org/players/4/19/243413.png
Nationality: RepublicOfIreland
Flag URL: https://cdn.sofifa.org/flags/25.png
Overall Score: 47
Potential: 68
Club: WaterfordFC
Club Logo URL: https://cdn.sofifa.org/teams/2/light/753.png
Value: €60K
Wage: €1K
Special: 1098
Preferred Foot: Left
International Reputation: 1
Weak Foot: 3
Skill Moves: 2
Work Rate: Medium/Medium
************************************************************

Node Value: 51+3
Unique Key [LB]: 51+3
Sheet Row No.: 38
Player ID: 167664
Full Name: G.Higuaín
Age: 30
Photo URL: https://cdn.sofifa.org/players/4/19/167664.png
Nationality: Argentina
Flag URL: https://cdn.sofifa.org/flags/52.png
Overall Score: 88
Potential: 88
Club: Milan
Club Logo URL: https://cdn.sofifa.org/teams/2/light/47.png
Value: €57M
Wage: €245K
Special: 1965
Preferred Foot: Right
International Reputation: 4
Weak Foot: 4
Skill Moves: 3
Work Rate: High/Medium
************************************************************

Node Value: 51+2
Unique Key [LB]: 51+2
Sheet Row No.: 159
Player ID: 230294
Full Name: LouriBeretta
Age: 26
Photo URL: https://cdn.sofifa.org/players/4/19/230294.png
Nationality: Brazil
Flag URL: https://cdn.sofifa.org/flags/54.png
Overall Score: 83
Potential: 83
Club: AtléticoMineiro
Club Logo URL: https://cdn.sofifa.org/teams/2/light/1035.png
Value: €28.5M
Wage: €60K
Special: 1921
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 4
Work Rate: High/Low
************************************************************

Node Value: 53+3
Unique Key [LB]: 53+3
Sheet Row No.: 23
Player ID: 153079
Full Name: S.Agüero
Age: 30
Photo URL: https://cdn.sofifa.org/players/4/19/153079.png
Nationality: Argentina
Flag URL: https://cdn.sofifa.org/flags/52.png
Overall Score: 89
Potential: 89
Club: ManchesterCity
Club Logo URL: https://cdn.sofifa.org/teams/2/light/10.png
Value: €64.5M
Wage: €300K
Special: 2107
Preferred Foot: Right
International Reputation: 4
Weak Foot: 4
Skill Moves: 4
Work Rate: High/Medium
************************************************************

Node Value: 67+3
Unique Key [LB]: 67+3
Sheet Row No.: 32
Player ID: 189242
Full Name: Coutinho
Age: 26
Photo URL: https://cdn.sofifa.org/players/4/19/189242.png
Nationality: Brazil
Flag URL: https://cdn.sofifa.org/flags/54.png
Overall Score: 88
Potential: 89
Club: FCBarcelona
Club Logo URL: https://cdn.sofifa.org/teams/2/light/241.png
Value: €69.5M
Wage: €340K
Special: 2175
Preferred Foot: Right
International Reputation: 3
Weak Foot: 4
Skill Moves: 5
Work Rate: High/High
************************************************************

Node Value: 61+3
Unique Key [LB]: 61+3
Sheet Row No.: 1
Player ID: 20801
Full Name: CristianoRonaldo
Age: 33
Photo URL: https://cdn.sofifa.org/players/4/19/20801.png
Nationality: Portugal
Flag URL: https://cdn.sofifa.org/flags/38.png
Overall Score: 94
Potential: 94
Club: Juventus
Club Logo URL: https://cdn.sofifa.org/teams/2/light/45.png
Value: €77M
Wage: €405K
Special: 2228
Preferred Foot: Right
International Reputation: 5
Weak Foot: 4
Skill Moves: 5
Work Rate: High/Low
************************************************************

Node Value: 59+2
Unique Key [LB]: 59+2
Sheet Row No.: 0
Player ID: 158023
Full Name: L.Messi
Age: 31
Photo URL: https://cdn.sofifa.org/players/4/19/158023.png
Nationality: Argentina
Flag URL: https://cdn.sofifa.org/flags/52.png
Overall Score: 94
Potential: 94
Club: FCBarcelona
Club Logo URL: https://cdn.sofifa.org/teams/2/light/241.png
Value: €110.5M
Wage: €565K
Special: 2202
Preferred Foot: Left
International Reputation: 5
Weak Foot: 4
Skill Moves: 4
Work Rate: Medium/Medium
************************************************************

Node Value: 60+3
Unique Key [LB]: 60+3
Sheet Row No.: 2
Player ID: 190871
Full Name: NeymarJr
Age: 26
Photo URL: https://cdn.sofifa.org/players/4/19/190871.png
Nationality: Brazil
Flag URL: https://cdn.sofifa.org/flags/54.png
Overall Score: 92
Potential: 93
Club: ParisSaint-Germain
Club Logo URL: https://cdn.sofifa.org/teams/2/light/73.png
Value: €118.5M
Wage: €290K
Special: 2143
Preferred Foot: Right
International Reputation: 5
Weak Foot: 5
Skill Moves: 5
Work Rate: High/Medium
************************************************************

Node Value: 67+2
Unique Key [LB]: 67+2
Sheet Row No.: 166
Player ID: 212523
Full Name: AndersonTalisca
Age: 24
Photo URL: https://cdn.sofifa.org/players/4/19/212523.png
Nationality: Brazil
Flag URL: https://cdn.sofifa.org/flags/54.png
Overall Score: 83
Potential: 90
Club: GuangzhouEvergrandeTaobaoFC
Club Logo URL: https://cdn.sofifa.org/teams/2/light/111839.png
Value: €36.5M
Wage: €18K
Special: 2142
Preferred Foot: Left
International Reputation: 2
Weak Foot: 4
Skill Moves: 4
Work Rate: High/Medium
************************************************************

Node Value: 66+5
Unique Key [LB]: 66+5
Sheet Row No.: 7
Player ID: 176580
Full Name: L.Suárez
Age: 31
Photo URL: https://cdn.sofifa.org/players/4/19/176580.png
Nationality: Uruguay
Flag URL: https://cdn.sofifa.org/flags/60.png
Overall Score: 91
Potential: 91
Club: FCBarcelona
Club Logo URL: https://cdn.sofifa.org/teams/2/light/241.png
Value: €80M
Wage: €455K
Special: 2346
Preferred Foot: Right
International Reputation: 5
Weak Foot: 4
Skill Moves: 3
Work Rate: High/Medium
************************************************************

Node Value: 79+3
Unique Key [LB]: 79+3
Sheet Row No.: 6
Player ID: 177003
Full Name: L.Modrić
Age: 32
Photo URL: https://cdn.sofifa.org/players/4/19/177003.png
Nationality: Croatia
Flag URL: https://cdn.sofifa.org/flags/10.png
Overall Score: 91
Potential: 91
Club: RealMadrid
Club Logo URL: https://cdn.sofifa.org/teams/2/light/243.png
Value: €67M
Wage: €420K
Special: 2280
Preferred Foot: Right
International Reputation: 4
Weak Foot: 4
Skill Moves: 4
Work Rate: High/High
************************************************************

Node Value: 73+3
Unique Key [LB]: 73+3
Sheet Row No.: 4
Player ID: 192985
Full Name: K.DeBruyne
Age: 27
Photo URL: https://cdn.sofifa.org/players/4/19/192985.png
Nationality: Belgium
Flag URL: https://cdn.sofifa.org/flags/7.png
Overall Score: 91
Potential: 92
Club: ManchesterCity
Club Logo URL: https://cdn.sofifa.org/teams/2/light/10.png
Value: €102M
Wage: €355K
Special: 2281
Preferred Foot: Right
International Reputation: 4
Weak Foot: 5
Skill Moves: 4
Work Rate: High/High
************************************************************

Node Value: 72+3
Unique Key [LB]: 72+3
Sheet Row No.: 142
Player ID: 178562
Full Name: E.Banega
Age: 30
Photo URL: https://cdn.sofifa.org/players/4/19/178562.png
Nationality: Argentina
Flag URL: https://cdn.sofifa.org/flags/52.png
Overall Score: 84
Potential: 84
Club: SevillaFC
Club Logo URL: https://cdn.sofifa.org/teams/2/light/481.png
Value: €29M
Wage: €31K
Special: 2133
Preferred Foot: Right
International Reputation: 3
Weak Foot: 4
Skill Moves: 4
Work Rate: Medium/Medium
************************************************************

Node Value: 70+2
Unique Key [LB]: 70+2
Sheet Row No.: 4326
Player ID: 211060
Full Name: Elsinho
Age: 28
Photo URL: https://cdn.sofifa.org/players/4/19/211060.png
Nationality: Brazil
Flag URL: https://cdn.sofifa.org/flags/54.png
Overall Score: 71
Potential: 71
Club: KawasakiFrontale
Club Logo URL: https://cdn.sofifa.org/teams/2/light/111730.png
Value: €1.9M
Wage: €7K
Special: 1883
Preferred Foot: Right
International Reputation: 1
Weak Foot: 3
Skill Moves: 3
Work Rate: High/Medium
************************************************************

Node Value: 77+3
Unique Key [LB]: 77+3
Sheet Row No.: 11
Player ID: 182521
Full Name: T.Kroos
Age: 28
Photo URL: https://cdn.sofifa.org/players/4/19/182521.png
Nationality: Germany
Flag URL: https://cdn.sofifa.org/flags/21.png
Overall Score: 90
Potential: 90
Club: RealMadrid
Club Logo URL: https://cdn.sofifa.org/teams/2/light/243.png
Value: €76.5M
Wage: €355K
Special: 2190
Preferred Foot: Right
International Reputation: 4
Weak Foot: 5
Skill Moves: 3
Work Rate: Medium/Medium
************************************************************

Node Value: 84+3
Unique Key [LB]: 84+3
Sheet Row No.: 8
Player ID: 155862
Full Name: SergioRamos
Age: 32
Photo URL: https://cdn.sofifa.org/players/4/19/155862.png
Nationality: Spain
Flag URL: https://cdn.sofifa.org/flags/45.png
Overall Score: 91
Potential: 91
Club: RealMadrid
Club Logo URL: https://cdn.sofifa.org/teams/2/light/243.png
Value: €51M
Wage: €380K
Special: 2201
Preferred Foot: Right
International Reputation: 4
Weak Foot: 3
Skill Moves: 3
Work Rate: High/Medium
************************************************************

Node Value: 80+3
Unique Key [LB]: 80+3
Sheet Row No.: 34
Player ID: 178603
Full Name: M.Hummels
Age: 29
Photo URL: https://cdn.sofifa.org/players/4/19/178603.png
Nationality: Germany
Flag URL: https://cdn.sofifa.org/flags/21.png
Overall Score: 88
Potential: 88
Club: FCBayernMünchen
Club Logo URL: https://cdn.sofifa.org/teams/2/light/21.png
Value: €46M
Wage: €160K
Special: 2038
Preferred Foot: Right
International Reputation: 4
Weak Foot: 3
Skill Moves: 3
Work Rate: High/Medium
************************************************************
```
