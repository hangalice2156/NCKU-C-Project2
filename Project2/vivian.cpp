#include "vivian.h"

vivian::vivian()
{
    hp = 120;
    max_hp = 120;
    atk = 45;
    def = 30;
    move = 5;
    max_move = 5;
    team = 1; //player
    x = 0;
    y = 32*11;
}

vivian::~vivian()
{

}

void vivian::setLocat(room *r)
{
    x = r->map1[0][11].x;
    y = r->map1[0][11].y;
}


void vivian::test()
{

}
