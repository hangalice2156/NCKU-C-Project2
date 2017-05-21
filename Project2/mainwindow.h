#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QPushButton>
#include <QKeyEvent>
#include <cmath>

#include "map.h"
#include "room.h"
#include "unit.h"
#include "leon.h"
#include "athena.h"
#include "vivian.h"
#include "mei.h"
#include "tower.h"
#include "enemy.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void generate_map(room *r);
    void character_set();
    int character_counter;

public slots:
    void generate_minions();
    void generate_Leon();
    void generate_Athena();
    void generate_Vivian();
    void generate_Mei();
    virtual void keyPressEvent(QKeyEvent *k);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QVector<QGraphicsPixmapItem*> item1;
    QVector<unit*> minions;
    unit *flag;
    QPushButton *chara1;
    QPushButton *chara2;
    QPushButton *chara3;
    QPushButton *chara4;
    QPushButton *start;
};

#endif // MAINWINDOW_H
