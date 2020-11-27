#ifndef LL_H
#define LL_H
#include"player.h"
class LL
{
    player *hol;
    int size;
public:
    void add_node(player*&);
    void show_all();
    ~LL();
    LL();

};

#endif 
