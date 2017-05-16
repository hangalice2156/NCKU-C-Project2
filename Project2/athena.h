#ifndef ATHENA_H
#define ATHENA_H

#include "unit.h"

class athena: public unit
{
public:
    athena();
    ~athena();

    virtual void setLocat(room *r);
};

#endif // ATHENA_H
