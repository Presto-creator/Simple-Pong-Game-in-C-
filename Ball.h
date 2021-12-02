#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <time.h>
#include <conio.h>


using namespace std;

enum eDir { STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6 };

class cBall
{
private:
    int x, y, originalX, originalY;
    eDir direction;
public:
    cBall(int posX, int posY) 
    {
        originalX = posX; originalY = posY;
        x = posX; y = posY;
        direction = STOP;
    }

    inline int getX() { return x; }
    inline int getY() { return y; }
    inline eDir getDirection() { return direction; }

    void Reset()
    {
        x = originalX; y = originalY;
        direction = STOP;
    }
    void changeDirection(eDir d)
    { direction = d;}

    void randomDirection()
    { direction = (eDir)((rand() % 6) + 1); }

    void Move()
    {
        switch (direction)
        {
        case STOP:
            break;
        case LEFT:
            x--;
            break;
        case UPLEFT:
            x--; y--;
            break;
        case DOWNLEFT:
            x--; y++;
            break;
        case RIGHT:
            x++;
            break;
        case UPRIGHT:
            x++; y--;
            break;
        case DOWNRIGHT:
            x++; y++;
            break;
        default:
            break;
        }
    }

    friend ostream& operator<<(ostream& out, cBall c)
    {
        out << "Ball [" << c.x << "," << c.y << "][" << c.direction << "]";
        return out;
    }
};

#endif