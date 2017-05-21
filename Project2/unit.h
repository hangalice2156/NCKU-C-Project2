#ifndef UNIT_H
#define UNIT_H

#include <QObject>
#include "map.h"
#include "room.h"

#include <QKeyEvent>

class unit: public QObject, public QGraphicsPixmapItem
{
     Q_OBJECT
public:
    unit();
    ~unit();

    int getHp();
    int getMaxHp();
    int getMovement();
    int getMaxMovement();
    void onHit(int enemyatk);
    int getxPos();
    int getyPos();
    virtual void setLocat(room *r);

public:
    int hp;
    int max_hp;

    int atk;
    int def;

    int move;
    int max_move;

    int team;

    int x;
    int y;
};

#endif // UNIT_H
