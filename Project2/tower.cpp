#include "tower.h"

tower::tower()
{

}

tower::tower(int tag)
{
    hp = 300;
    max_hp = 300;
    atk = 50;
    def = 0;
    move = 1;
    max_move = 1;
    team = tag;

    if(team == 1)
    {
        x = 0;
        y = 32*10;
    }

    if(team == 2)
    {
        x = 32*29;
        y = 32*9;
    }
}

tower::~tower()
{

}

void tower::setLocat()
{

}
