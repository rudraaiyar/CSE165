
#ifndef Rect_h
#define Rect_h
#include "Circle.h"
#include "Cross.h"

#include <stdio.h>

class Rect
{
private:
	X xshape;
	Circle oshape;
public:
	bool click;
    int player;
	float r;
	float g;
	float b;
	float x;
	float y;
	float w;
	float h;

    Rect(float xx, float yy, float width, float height)
    {
        x = xx;
        y = yy;
        w = width;
        h = height;
        r = 0.0;
        g = 0.0;
        b = 0.0;
        click = false;
        xshape = X(x, y, w, h);
        oshape = Circle(x + 0.5*w, y - 0.5*h);
    }
    
    bool contains(float xx, float yy)
    {
        if (xx >= x && xx <= x + w && yy <= y && yy >= y - h)
            return true;
        else
            return false;
    }
    void Player(int firstplayer, int secondplayer)
    {
        firstplayer = 1;
        secondplayer = 2;
    }
    
    void draw()
    {
        if (click)
        {
            if (player == 1)
            {
                xshape.draw();
            }
            else if (player == 2)
            {
                oshape.draw();
            }
        }
        glColor3d(r, g, b);
        glBegin(GL_POLYGON);
        glVertex2f(x, y);
        glVertex2f(x+w, y);
        glVertex2f(x+w, y-h);
        glVertex2f(x, y-h);
        
        glEnd();
        
    }
	
};

#endif



