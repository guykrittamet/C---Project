#include <iostream>
//#include <graphics.h>
#include "LL.h"
#include "player.h"
#include "player_s.h"
using namespace std;
#include <fstream>
#include "function.h"


int main(int argc, char *argv[])
{
    LL A;
    string name;
    /*int i;
    NODE *t;*/

    project_name();
    menu();
    int mode;
    cin>>mode;
    if(mode==1||mode==2||mode==3)
    {
        if(mode==1)
        {
            system("CLS");
    		cout<<"NEW GAME"<<endl;
    		cout<<"Register____PLS ENTER YOUR NAME : ";
	    	cin>>name;
    		ofstream myfile ("Player.txt");
    		if (myfile.is_open())
    		{
        		myfile << name;
        		player_s(0 ,name);
        		myfile.close();
    		}
    		else
       	 		cout << "Unable to open file";
            		game_1();
					A.show_all();
        }
        else if(mode==2)
		{
            cout<<"rank"<<endl;
            system("cls");
        }
            
        else if(mode==3)
            cout<<"history"<<endl;

        else if(mode==4)
        {
            system("cls");
        }


    }
    return 0;
}



