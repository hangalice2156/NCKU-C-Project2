#include "athena.h"

athena::athena()
{
    hp = 110;
    max_hp = 110;
    atk = 50;
    def = 30;
    move = 5;
    max_move = 5;
    team = 1; //player
    x = 0;
    y = 286;
}

athena::~athena()
{

}

void athena::setLocat(room *r)
{
    x = r->map1[0][9].x;
    y = r->map1[0][9].y;
}
