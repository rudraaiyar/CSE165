#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#ifndef X_hpp
#define X_hpp
#include "shape.h"
#include <iostream>
#include "GLutApp.h"
#include "Rect.h"
using namespace std;

class X : public shape
{
	float x;
	float y;
	float w;
	float h;
public:
	X()
	{

	}
	X(float x, float y, float w, float h)
	{
		this->x = x;
		this->y = y;
		this->w = w;
		this->h = h;
	}
	void draw()
	{
		glColor3d(1.0, 1.0, 0.0);
		glBegin(GL_LINES);
		glVertex3f(x, y, -0.1);
		glVertex3f(x + w, y - h, -0.1);
		glVertex3f(x + w, y, -0.1);
		glVertex3f(x, y - h, -0.1);
		glEnd();
	};
};
#endif


