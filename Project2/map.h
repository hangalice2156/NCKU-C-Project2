#ifndef MAP_H
#define MAP_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>

class map: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    map();
    ~map();

    QString name;
    bool walk;

    //position
    int x;
    int y;
};

#endif // MAP_H
