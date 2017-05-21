#ifndef ENEMY_H
#define ENEMY_H

#include "unit.h"

class enemy: public unit
{
public:
    enemy();
    ~enemy();

    virtual void setLocat();
};

#endif // ENEMY_H
