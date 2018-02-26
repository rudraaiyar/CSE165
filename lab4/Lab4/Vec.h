#include <iostream>
using namespace std;

class Vec {
    
public:
    static Vec null;
    float x, y;
    Vec(){
        x = 0;
        y = 0;
    }
    
    Vec(float a, float b){
        x = a;
        y = b;
    }
    
    float getX(){
        return x;
    }
    
    float getY(){
        return y;
    }
    
    void add(Vec &a){
        this->x += a.x;
        this->y += a.y;
    }
    
    void print(){
        cout << "(" << this->x << ", " << this->y << ")" << endl;
    }
};

Vec Vec::null = Vec(0,0);
