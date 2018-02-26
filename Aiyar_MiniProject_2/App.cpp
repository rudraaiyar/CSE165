#include "App.h"
#include "Rect.h"

App::App(const char* label, int x, int y, int w, int h): GlutApp(label, x, y, w, h){
    // Initialize state variables
    mx = 0.0;
    my = 0.0;
    
    //add to our vector of rects, dimensions
    reckt.push_back(new Rect(-0.7,0.8,0.8,0.5)); //1
    
    reckt.push_back(new Rect(0.5,-0.8,0.8,0.8)); //2
    
}

void App::draw() {

    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // Set background color to black
    glClearColor(0.0, 0.0, 0.0, 1.0);
    
    // Set up the transformations stack
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // Set Color
    glColor3d(1.0, 1.0, 1.0);
    
    //***********************place vec position and click colors ere*************************
    if (reckt[0]->click) {
        glColor3d(0.1, 0.9, 0.2);
    }
    else {
        glColor3d(0.0, 1.0, 1.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(reckt[0]->x, reckt[0]->y);
    glVertex2f(reckt[0]->x+reckt[0]->width, reckt[0]->y);
    glVertex2f(reckt[0]->x+reckt[0]->width, reckt[0]->y-reckt[0]->height);
    glVertex2f(reckt[0]->x, reckt[0]->y-reckt[0]->height);
    glEnd();
    
    if (reckt[1]->click) {
        glColor3d(0.9, 0.9, 0.2);
    }
    else {
        glColor3d(0.0, 0.2, 1.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(reckt[1]->x, reckt[1]->y);
    glVertex2f(reckt[1]->x+reckt[1]->width, reckt[1]->y);
    glVertex2f(reckt[1]->x+reckt[1]->width, reckt[1]->y-reckt[1]->height);
    glVertex2f(reckt[1]->x, reckt[1]->y-reckt[1]->height);
    glEnd();
    

    // Draw some points
    glBegin(GL_POINTS);
    
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    
    glEnd();
    
    // Draw a yellow cross
    glColor3d(1.0, 1.0, 0.0);
    
    glBegin(GL_LINES);
    
    glVertex2f(mx - 0.05f, my);
    glVertex2f(mx + 0.05f, my);
    
    glVertex2f(mx, my - 0.05f);
    glVertex2f(mx, my + 0.05f);
    
    glEnd();
    
    // We have been drawing everything to the back buffer
    // Swap the buffers to see the result of what we drew
    glFlush();
    glutSwapBuffers();
}



void App::mouseDown(float x, float y){
    // Update app state
    mx = x;
    my = y;
   //*************if the click is in a rect, call contains*********
    for (int i = 0; i < reckt.size(); i++){
        reckt[i]->click = reckt[i]->contains(mx, my);
        if (reckt[i]->contains(mx, my)) {
            return;
        }
    }
    
    
    // Redraw the scene
    redraw();
}

void App::mouseDrag(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    // Redraw the scene
    redraw();
}

void App::keyPress(unsigned char key) {
    if (key == 27){
        // Exit the app when Esc key is pressed
        exit(0);
    }
}
