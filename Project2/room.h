#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QVector>
#include <iostream>

#include "map.h"

class room: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    room();
    ~room();

    map map1[30][20];

};

#endif // ROOM_H
