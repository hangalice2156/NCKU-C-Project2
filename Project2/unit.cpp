#include "unit.h"


unit::unit()
{

}

unit::~unit()
{

}


int unit::getHp()
{
    return hp;
}

int unit::getMaxHp()
{
    return max_hp;
}

int unit::getMovement()
{
    return move;
}

int unit::getMaxMovement()
{
    return max_move;
}

void unit::onHit(int enemyatk)
{
    if((enemyatk - def) >= 0) hp -= (enemyatk - def);
}
