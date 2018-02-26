
#ifndef X_hpp
#define X_hpp
#include <iostream>
#include "Rect.h"
using namespace std;

class X
{
	float x;
	float y;
	float w;
	float h;
public:
	X(){}
	X(float x, float y, float w, float h)
	{
		this->x = x;
		this->y = y;
		this->w = w;
		this->h = h;
	}
	void draw()
	{
		glColor3d(0.4, 0.2, 0.4);
		glBegin(GL_LINES);
		glVertex3f(x, y, -0.2);
		glVertex3f(x + w, y - h, -0.2);
		glVertex3f(x + w, y, -0.2);
		glVertex3f(x, y - h, -0.2);
		glEnd();
	};
};
#endif

