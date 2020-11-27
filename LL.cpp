#include <iostream>
#include "player.h"
#include "LL.h"
#include "player_s.h"
using namespace std;
LL::LL()
{
    hol=NULL;
    size=0;
}

LL::~LL()
{
    int i;
    player *t;
    for(i=0; i<size; i++)
    {
        t=hol;
        hol=hol->move_next();
        delete t;
    }

}

void LL::show_all()
{
    player* t=hol;
    int i;
    for(i=0; i<size; i++)
    {
        t->show_player_data();
        t=t->move_next();
    }
}
void LL::add_node(player *&A)
{

    hol->insert(A);
    hol=A;

    size++;

}
