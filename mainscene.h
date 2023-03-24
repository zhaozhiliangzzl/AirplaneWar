#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include "map.h"
#include "heroplane.h"
#include "bullet.h"
#include "enemyplane.h"
#include "bomb.h"


class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = 0);
    ~MainScene();

    void initScene();

    QTimer m_Timer;

    void playGame();

    void updatePosition();

    void paintEvent(QPaintEvent *Event);

    Map m_map;

    HeroPlane m_hero;

    void mouseMoveEvent(QMouseEvent *event);

    void enemyToScene();

    EnemyPlane m_enemys[ENEMY_NUM];

    int m_recorder;

    void collisionDetection();

    Bomb m_bombs[BOMB_NUM];

};



#endif // MAINSCENE_H
