// Project_cpp_2013-2014.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>

#include "vehicle.h"
#include "ground.h"
#include "creating.h"
#include "Base.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));
	int a;
	string comp;

	vehicle* vehicle_1 = new vehicle(10 , true , 1.1);

	vehicle_1->setmovement(true);
	cout << vehicle_1->getmovement() << "\n";

	Base* base_1 = new Base();
	cout << base_1->getcapacity() << "\n";


	map<int, ground> xartisedafous;
	ground ground_1;

	//vector<int, analyzer> oximata_analyzer;

	//Dimiourgia kai arxikopoiisi twn simeiwn tou xarti 
	for (int i = 1; i <= 100; i++)
	{
			
		ground_1.danger = float(rand() % 90) / 100;
		ground_1.iridium = (rand() % 150) + 1;
		ground_1.palladium = (rand() % 150) + 1;
		ground_1.platinum = (rand() % 150) + 1;

		cout << "vasiko set up:" << i << "\n";
		cout << "Iridium: \t" << ground_1.iridium << "\n";
		cout << "Palladium: \t" << ground_1.palladium << "\n";
		cout << "Platinum: \t" << ground_1.platinum << "\n";
		cout << "Danger: \t" << ground_1.danger << "\n\n";

		//cout << ground_1.getcomposition() << "\n";
		//cout << ground_1.getdanger() << "\n";

		xartisedafous[i] = ground_1;


		/*cout << xartisedafous[i].getiridium() << "\n";
		cout << xartisedafous[i].getpalladium() << "\n";
		cout << xartisedafous[i].getplatinum() << "\n";
		cout << xartisedafous[i].getdanger() << "\n";*/

	}

	//Dimiourgia kai arxikopoiisi twn analysers
	for (int j = 1; j <= 5; j++)
	{

	}

	//Dimiourgia kai arxikopoiisi twn explorers
	for (int j = 1; j <= 5; j++)
	{

	}

	//Dimiourgia kai arxikopoiisi twn rescuers
	for (int j = 1; j <= 5; j++)
	{

	}

	/*for (int j = 0; j < 10; j++)
	{
		cout << "xartis edafous:" << j << "\n";
		cout << xartisedafous[j].getiridium() << "\n";
		cout << xartisedafous[j].getpalladium() << "\n";
		cout << xartisedafous[j].getplatinum() << "\n";
		cout << xartisedafous[j].getdanger() << "\n";
	}*/
	
	
	

	//xartisedafous.insert(std::pair<int, ground>(1, ground_1));
	//xartisedafous[1] = ground_1;
	//cout << xartisedafous[1].getiridium() << "\n";
	//cout << xartisedafous[1].getdanger() << "\n";	
	//cout << xartisedafous[pair(0, 0)]->getdanger();


	cout<<  "################################################\n";
	cout<<  "# *                                            #\n";
	cout<<  "#_|_ ________                                  #\n";
	cout<<  "#|=|/     /  \\                                 #\n";
	cout<<  "#| |_____|____|                                #\n";
	cout<<  "#|_|_____|[--]|                                #\n";
	cout<<  "#----------------------------------------------#\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "################################################\n";


	system("PAUSE");
	return 0;
}



