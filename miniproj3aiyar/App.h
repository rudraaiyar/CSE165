#ifndef App_hpp
#define App_hpp

#include "GlutApp.h"
#include <vector>
#include "Rect.h"
#include "Cross.h"

using namespace std;
class App: public GlutApp {
    // Maintain app state here
    float mx;
    float my;
	int player;
	void switchTurns();
	void findWinner();
	void pickSquare(int first, int second, int third);
	int winner;
	bool computer;
private:
public:
    // Constructor, to initialize state
    App(const char* label, int x, int y, int w, int h);
    
    // These are the events we want to handle
    void draw();
    void keyPress(unsigned char key);
    void mouseDown(float x, float y);
    void mouseDrag(float x, float y);
	vector<Rect*>reckt;
};

#endif

