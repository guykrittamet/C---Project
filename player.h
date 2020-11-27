#include<iostream>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H

class player
{
    int player_money ;
    int player_pm;
    string player_name;
    player* next;
public:
    player(string);
    virtual void show_player_data();
    void insert(player *&);
    player* move_next();
    virtual ~player();
    void next_node(player *&);
    void next_null();

};
#endif 
