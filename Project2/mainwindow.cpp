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
    character_set();
    character_counter = 0;
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

void MainWindow::character_set()
{
    chara1 = new QPushButton(tr("Leon"),this);
    chara1->setGeometry(65,22,80,80);
    chara1->setIcon(QIcon(QPixmap(":/Project2_res/Characters/Lion.png")));
    chara1->setIconSize(QSize(80,80));
    connect(chara1,SIGNAL(clicked()),this,SLOT(generate_Leon()));

    chara2 = new QPushButton(tr("Athena"),this);
    chara2->setGeometry(65,102,80,80);
    chara2->setIcon(QIcon(QPixmap(":/Project2_res/Characters/Athena.png")));
    chara2->setIconSize(QSize(80,80));
    connect(chara2,SIGNAL(clicked()),this,SLOT(generate_Athena()));

    chara3 = new QPushButton(tr("Vivian"),this);
    chara3->setGeometry(65,182,80,80);
    chara3->setIcon(QIcon(QPixmap(":/Project2_res/Characters/Vivian.png")));
    chara3->setIconSize(QSize(80,80));
    connect(chara3,SIGNAL(clicked()),this,SLOT(generate_Vivian()));

    chara4 = new QPushButton(tr("Mei"),this);
    chara4->setGeometry(65,262,80,80);
    chara4->setIcon(QIcon(QPixmap(":/Project2_res/Characters/Mei.png")));
    chara4->setIconSize(QSize(80,80));
    connect(chara4,SIGNAL(clicked()),this,SLOT(generate_Mei()));
}

void MainWindow::generate_Leon()
{
    if(character_counter < 2)
    {
        minions.push_back(new leon);
        minions[minions.size()-1]->setPixmap(QPixmap(":/Project2_res/Characters/Lion.png"));
        scene->addItem(minions[minions.size()-1]);
        minions[minions.size()-1] -> setPos(minions[minions.size()-1]->x,minions[minions.size()-1]->y);

        character_counter += 1;
        delete chara1;
    }

}

void MainWindow::generate_Athena()
{
    if(character_counter < 2)
    {
        minions.push_back(new athena);
        minions[minions.size()-1]->setPixmap(QPixmap(":/Project2_res/Characters/Athena.png"));
        scene->addItem(minions[minions.size()-1]);
        minions[minions.size()-1] -> setPos(minions[minions.size()-1]->x,minions[minions.size()-1]->y);

        character_counter += 1;
        delete chara2;
    }

}

void MainWindow::generate_Vivian()
{
    if(character_counter < 2)
    {
        minions.push_back(new vivian);
        minions[minions.size()-1]->setPixmap(QPixmap(":/Project2_res/Characters/Vivian.png"));
        scene->addItem(minions[minions.size()-1]);
        minions[minions.size()-1] -> setPos(minions[minions.size()-1]->x,minions[minions.size()-1]->y);

        character_counter += 1;
        delete chara3;
    }

}

void MainWindow::generate_Mei()
{
    if(character_counter < 2)
    {
        minions.push_back(new mei);
        minions[minions.size()-1]->setPixmap(QPixmap(":/Project2_res/Characters/Mei.png"));
        scene->addItem(minions[minions.size()-1]);
        minions[minions.size()-1] -> setPos(minions[minions.size()-1]->x,minions[minions.size()-1]->y);

        character_counter += 1;
        delete chara4;
    }

}

void MainWindow::generate_minions()
{

}
