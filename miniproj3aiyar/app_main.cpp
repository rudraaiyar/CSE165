#include "App.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	// Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    
    // Instantiate a new App
    App* myApp = new App("Tic Tac Toe", 50, 50, 600, 600);

	// Start the app
    myApp->run();
    
   // cout<< "To start computer player press 'c' key."<<endl;
}
