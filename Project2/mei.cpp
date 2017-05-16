#include "mei.h"

mei::mei()
{
    hp = 90;
    max_hp = 90;
    atk = 60;
    def = 20;
    move = 4;
    max_move = 4;
    team = 1; //player
    x = 0;
    y = 414;
}

mei::~mei()
{

}

void mei::setLocat(room *r)
{
    x = r->map1[0][13].x;
    y = r->map1[0][13].y;
}

