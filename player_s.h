#include<iostream>
using namespace std;
//#indef player_h
//#define player_h
#ifndef PLAYER_S
#define PLAYER_S
class player_s:public player
{
    int score;
public:
    player_s(int,string);
    void show_player_s_data()
    {
        cout<<"-------PLAYER-------";
        player::show_player_data();
        cout<<"Player  "<<endl<<endl;
        cout<<"Score: "<<score<<endl;
        cout<<"P.M.2.5: "<<endl;
    }
    ~player_s();
};

player_s::player_s(int x,string n):player(n)
{
    score=x;
}

player_s::~player_s()
{
    cout<< "Player is being deleted."<<endl;


}
#endif
