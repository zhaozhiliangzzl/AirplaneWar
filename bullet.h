#ifndef BULLET_H
#define BULLET_H

#include <QPixmap>

class Bullet
{
public:
    Bullet();

    void updatePosition();
public:
    QPixmap m_Bullut;

    int m_X;
    int m_Y;

    int m_Speed;

    bool m_Free;

    QRect m_Rect;
};

#endif // BULLET_H
