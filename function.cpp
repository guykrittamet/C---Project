#include <iostream>
#include <fstream>
#include "player.h"
#include "LL.h"
#include "player_s.h"
#include <string>

//#include <windows.h>
//#include <graphics.h>
using namespace std;

int tree1 = 600;
int tree2 = 1000;
int wintur = 1500;
int bush = 500;
int purif1 = 2000;
int purif2 = 4000;
int highpre = 200;

void project_name()
{
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\tCCCCCCCCCC  IIIIIIIIII  TTTTTTTTTT  YYYY    YYYY         2222222222        5555555555"<<endl;
    cout<<"\t\t\t\t\t\t\t\tCCCCCCCCCC  IIIIIIIIII  TTTTTTTTTT  YYYY    YYYY         2222222222        5555555555"<<endl;
    cout<<"\t\t\t\t\t\t\t\tCCCC           IIII        TTTT     YYYYYYYYYYYY               2222        5555      "<<endl;
    cout<<"\t\t\t\t\t\t\t\tCCCC           IIII        TTTT     YYYYYYYYYYYY         2222222222        5555555555"<<endl;
    cout<<"\t\t\t\t\t\t\t\tCCCC           IIII        TTTT         YYYY             2222222222        5555555555"<<endl;
    cout<<"\t\t\t\t\t\t\t\tCCCC           IIII        TTTT         YYYY             2222                    5555"<<endl;
    cout<<"\t\t\t\t\t\t\t\tCCCCCCCCCC     IIII        TTTT         YYYY             2222222222  OOOO  5555555555"<<endl;
    cout<<"\t\t\t\t\t\t\t\tCCCCCCCCCC     IIII        TTTT         YYYY             2222222222  OOOO  5555555555"<<endl;
}
void menu()
{
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tMENU"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   [1] NEW GAME"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   [2] RANK"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   [3] HISTORY"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   [0] EXIT_GAME"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t       Please choose mode : ";
}

/*void new_game()
{
    system("CLS");
    cout<<"NEW GAME"<<endl;
    cout<<"Register____PLS ENTER YOUR NAME : ";
    string name;
    cin>>name;
    player(name);
    ofstream myfile ("Player.txt");
    if (myfile.is_open())
    {
        myfile << name;
        myfile.close();
    }
    else
        cout << "Unable to open file";
}*/

void item()
{

    cout<<"       ITEM                          PRICE(Baht)      DECREASED PM 2.5"<<endl<<endl;
    cout<<" [1] A small tree                       600                  10"<<endl;
    cout<<" [2] A big tree                       1,000                  15"<<endl;
    cout<<" [3] A wind turbine                   1,500                  24"<<endl;
    cout<<" [4] A bush                             500                  12"<<endl;
    cout<<" [5] A small air purifier             2,000                  30"<<endl;
    cout<<" [6] A big air purifier               4,000                  45"<<endl;
    cout<<" [7] A high pressure cleaner            200                   2"<<endl;
}

void game_1()
{
	system("CLS");
	string name;
	ifstream myfile("player.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, name))
		{
			cout << "Hi " << name << endl;
		}
		myfile.close();
	}
	else
		cout << "Unable to open file";

	cout << "EPISODE 1" << endl;

	cout << "You have 10,000 baht." << endl << endl;
	item();
	cout << endl << "Buy item : ";
	int item = 0;
	cin >> item;

	int money = 10000;
	while (1) {
		int pm;
		switch (item)
		{

		case 1:
			/*initwindow(600,750,"Game");
			readimagefile("bg.jpg",0,0,750,600);
			readimagefile("tree.jpg",0,0,80,300);*/
			money = money - tree1;
			pm = pm + 10;
			cout << "money balance : " << money << endl;
			cout << "pm was decreased : " << pm << endl;
			break;
		case 2:
			money = money - tree2;
			pm = pm + 15;
			cout << "money balance : " << money << endl;
			cout << "pm was decreased : " << pm << endl;
			break;
		case 3:
			money = money - wintur;
			pm = pm + 24;
			cout << "money balance : " << money << endl;
			cout << "pm was decreased : " << pm << endl;
			break;
		case 4:
			money = money - bush;
			pm = pm + 12;
			cout << "money balance : " << money << endl;
			cout << "pm was decreased : " << pm << endl;
			break;
		case 5:
			money = money - purif1;
			pm = pm + 30;
			cout << "money balance : " << money << endl;
			cout << "pm was decreased : " << pm << endl;
			break;
		case 6:
			money = money - purif2;
			pm = pm + 45;
			cout << "money balance : " << money << endl;
			cout << "pm was decreased : " << pm << endl;
			break;
		case 7:
			money = money - highpre;
			pm = pm + 2;
			cout << "money balance : " << money << endl;
			cout << "pm was decreased : " << pm << endl;
			break;
		default:
			cout << "Please choose 1-7 : " << endl;
			cin.clear();
//			cin.ignore(INT_MAX, '\n');


		}



	}
}
