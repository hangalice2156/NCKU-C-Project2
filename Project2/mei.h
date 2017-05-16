#ifndef MEI_H
#define MEI_H

#include "unit.h"

class mei: public unit
{
public:
    mei();
    ~mei();

    virtual void setLocat(room *r);
};

#endif // MEI_H
