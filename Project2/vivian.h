#ifndef VIVIAN_H
#define VIVIAN_H

#include "unit.h"

class vivian: public unit
{
public:
    vivian();
    ~vivian();

    virtual void setLocat(room *r);

public slots:
    void test();
};

#endif // VIVIAN_H
