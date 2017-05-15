#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scene(new QGraphicsScene(0, 0, 961, 641))
{
    ui->setupUi(this);
    ui->graphicsView->setScene(scene);
    room *room1 = new room;
    generate_map(room1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generate_map(room *r)
{
    for(int i = 0; i < 30; ++i)
    {
        for(int j = 0; j < 20; ++j)
        {
            if(r -> map1[i][j].name == "Trees")
            {
                switch(qrand() % 5 + 1)
                {
                case 1: item1.push_back(new QGraphicsPixmapItem(QPixmap(":/Project2_res/Tiles/Tile_Trees1"))); break;
                case 2: item1.push_back(new QGraphicsPixmapItem(QPixmap(":/Project2_res/Tiles/Tile_Trees2"))); break;
                case 3: item1.push_back(new QGraphicsPixmapItem(QPixmap(":/Project2_res/Tiles/Tile_Trees3"))); break;
                case 4: item1.push_back(new QGraphicsPixmapItem(QPixmap(":/Project2_res/Tiles/Tile_Trees4"))); break;
                case 5: item1.push_back(new QGraphicsPixmapItem(QPixmap(":/Project2_res/Tiles/Tile_Trees5"))); break;
                default: std::cerr << "map generation failed!" << std::endl;
                }

                scene->addItem(item1[item1.size()-1]);
                item1[item1.size()-1] -> setPos(r -> map1[i][j].x, r -> map1[i][j].y);
            }

            else if(r -> map1[i][j].name == "Grass")
            {
                switch(qrand() % 3 + 1)
                {
                case 1: item1.push_back(new QGraphicsPixmapItem(QPixmap(":/Project2_res/Tiles/Tile_Grass1"))); break;
                case 2: item1.push_back(new QGraphicsPixmapItem(QPixmap(":/Project2_res/Tiles/Tile_Grass2"))); break;
                case 3: item1.push_back(new QGraphicsPixmapItem(QPixmap(":/Project2_res/Tiles/Tile_Grass3"))); break;
                default: std::cerr << "map generation failed!" << std::endl;
                }

                scene->addItem(item1[item1.size()-1]);
                item1[item1.size()-1] -> setPos(r -> map1[i][j].x, r -> map1[i][j].y);
            }
        }
    }
}
