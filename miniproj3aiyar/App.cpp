#include "App.h"
#include "Circle.h"
#include "Cross.h"
#include <iostream>

App::App(const char* label, int x, int y, int w, int h) : GlutApp(label, x, y, w, h) {
	// Initialize state variables
	mx = 0.0;
	my = 0.0;
    reckt.push_back(new Rect(-0.8,0.8,0.5,0.5)); //0
    reckt.push_back(new Rect(-0.3,0.8,0.5,0.5)); //1
    reckt.push_back(new Rect(0.2,0.8,0.5,0.5));  //2
    
    reckt.push_back(new Rect(-0.8,0.3,0.5,0.5)); //3
    reckt.push_back(new Rect(-0.3,0.3,0.5,0.5)); //4
    reckt.push_back(new Rect(0.2,0.3,0.5,0.5));  //5
    
    reckt.push_back(new Rect(-0.8,-0.2,0.5,0.5)); //6
    reckt.push_back(new Rect(-0.3,-0.2,0.5,0.5)); //7
    reckt.push_back(new Rect(0.2,-0.2,0.5,0.5));  //8
	winner = 0;
	player = 1;
	computer = false;
}
void App::draw() {

	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Set background color to black
	glClearColor(0.0, 0.0, 0.0, 1.0);

	// Set up the transformations stack
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
    
    //Draw some grid
    glLineWidth(2.5);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(-0.9, 0.3);
    glVertex2f(0.8, 0.3);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f(-0.9, -0.2);
    glVertex2f(0.8, -0.2);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f(-0.3, 0.9);
    glVertex2f(-0.3, -0.8);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f(0.2, 0.9);
    glVertex2f(0.2, -0.8);
    glEnd();
    
    // Draw a yellow cross
    glColor3d(1.0, 1.0, 0.0);
    
    glBegin(GL_LINES);
    
    glVertex2f(mx - 0.05f, my);
    glVertex2f(mx + 0.05f, my);
    
    glVertex2f(mx, my - 0.05f);
    glVertex2f(mx, my + 0.05f);
    
    glEnd();


	for (int i = 0; i < reckt.size(); ++i)
	{
		reckt[i]->draw();
	}

	if (winner == 1) {
        cout<<"X won"<<endl;
		glColor3d(0.4, 0.2, 0.4);
		glBegin(GL_POLYGON);
		glVertex3f(-0.90, -0.85, 0.2);
		glVertex3f(-0.90, -0.90, 0.2);
        glVertex3f(0.85, -0.90, 0.2);
		glVertex3f(0.85, -0.85, 0.2);
		glEnd();
        
        //exit(0);
	}
	else if (winner == 2) 
	{
        cout<<"O won"<<endl;

        glColor3d(1.0, 1.0, 0.0);
        glBegin(GL_POLYGON);
        glVertex3f(-0.90, -0.85, 0.2);
        glVertex3f(-0.90, -0.90, 0.2);
        glVertex3f(0.85, -0.90, 0.2);
        glVertex3f(0.85, -0.85, 0.2);
        glEnd();
        
        //exit(0);
	}
	//   We have been drawing everything to the back buffer
	//Swap the buffers to see the result of what we drew
	glFlush();
	glutSwapBuffers();

}
void App::switchTurns() 
{
	if (player == 1) 
	{
		player = 2;
		return;

	}
	else if (player == 2) 
	{
		player = 1;
		return;
	}

}
void App::pickSquare(int first, int second, int third)
{
	if (reckt[first]->click &&  reckt[second]->click && reckt[third]->click)
	{
		if (reckt[first]->player == reckt[second]->player && reckt[second]->player == reckt[third]->player)

		{
			winner = reckt[first]->player;
		}
	}
}

void App::findWinner() 
{
	pickSquare(0, 3, 6);
	pickSquare(0, 1, 2);
	pickSquare(1, 4, 7);
	pickSquare(3, 4, 5);
	pickSquare(2, 5, 8);
	pickSquare(6, 7, 8);
	pickSquare(2, 4, 6);
	pickSquare(0, 4, 8);

}
void App::mouseDown(float x, float y) {
	// Update app state
	mx = x;
	my = y;
	for (int i = 0; i < reckt.size(); i++) {

		if (!reckt[i]->click)
		{
			if (reckt[i]->contains(mx, my))
			{
				reckt[i]->click = true;
				reckt[i]->player = player;
				findWinner();
				switchTurns();
				if (computer)
				{
					for (int i = 0; i < reckt.size(); i++)
                    {
						if (!reckt[i]->click)
						{
							reckt[i]->click = true;
							reckt[i]->player = player;

							findWinner();
							switchTurns();
							break;
						}
					}
				}
				else
				{
					break;
				}
			}
		}
	}
	// Redraw the scene
	redraw();
}


void App::mouseDrag(float x, float y) {
	// Update app state
	mx = x;
	my = y;

	// Redraw the scene
	redraw();
}

void App::keyPress(unsigned char key) {
	if (key == 27) {
		// Exit the app when Esc key is pressed
		exit(0);
	}
	if (key == 'c')
	{
		computer = !computer;
        cout<<"computer player"<<endl;
	}
}
