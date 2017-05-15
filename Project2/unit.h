#ifndef UNIT_H
#define UNIT_H

#include <QObject>
#include "map.h"


class unit: public QObject
{
     Q_OBJECT
public:
    unit();
    ~unit();

    int getHp();
    int getMaxHp();
    void onHit(int enemyatk);
    int getMovement();
    int getMaxMovement();

private:
    int hp;
    int max_hp;

    int atk;
    int def;

    int move;
    int max_move;

    int team;
    map *locat;

};

#endif // UNIT_H
