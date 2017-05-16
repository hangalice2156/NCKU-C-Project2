#ifndef LEON_H
#define LEON_H

#include "unit.h"

class leon: public unit
{
public:
    leon();
    ~leon();

    virtual void setLocat(room *r);
};

#endif // LEON_H
