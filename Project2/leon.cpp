#include "leon.h"

leon::leon()
{
    hp = 150;
    max_hp = 150;
    atk = 40;
    def = 35;
    move = 4;
    max_move = 4;
    team = 1; //player
    x = 0;
    y = 224;
}

leon::~leon()
{

}

void leon::setLocat(room *r)
{
    x = r->map1[0][9].x;
    y = r->map1[0][9].y;
}
