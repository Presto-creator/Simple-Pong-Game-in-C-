#ifndef PLAYERPADDLE_H
#define PLAYERPADDLE_H

#include <iostream>
#include <time.h>
#include <conio.h>
#include "Ball.h"

class cPaddle
{
private:
    int x, y;
    int originalX, originalY;
public:
    cPaddle()
    {
        x = y = 0;
        originalX = originalY = 0;
    }
    cPaddle(int posX, int posY) : cPaddle()
    {
        originalX = posX; originalY = posY;
        x = posX; y = posY;
    }
    inline void Reset()
    {
        x = originalX; y = originalY;
    }

    inline int getX() { return x; }
    inline int getY() { return y; }
    inline void moveUp() { y--; }
    inline void moveDown() { y++; }

    friend ostream& operator<<(ostream& out, cPaddle c)
    {
        out << "Paddle [" << c.x << "," << c.y << "]";
        return out;
    }
};

#endif
