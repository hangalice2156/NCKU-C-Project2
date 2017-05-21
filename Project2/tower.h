#ifndef TOWER_H
#define TOWER_H

#include "unit.h"

class tower: public unit
{
public:
    tower();
    tower(int tag);
    ~tower();

    virtual void setLocat();
};

#endif // TOWER_H
