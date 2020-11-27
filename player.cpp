#include <iostream>
using namespace std;
#include"player.h"

player::player(string z)
{
    player_money=10000;
    player_pm=0;
    player_name=z;
    next=NULL;
    cout<<"adding "<<endl;
}
player::~player()
{
    cout<<"Player "" "<<player_name<<" is being deleted"<<endl;
}
player* player::move_next()
{
    return next;
}
void  player:: show_player_data()
{
    
	cout<<"Player  "<<player_name<<endl<<endl;
    cout<<"P.M.2.5: "<<player_pm<<endl;
}
void player::insert(player*& x)
{
    x->next=this;

}
void player::next_node(player *&x)
{
    next=x->move_next();
}
void player::next_null()
{
    next=NULL;
}
