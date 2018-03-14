#include <math.h>
class Circle{
    
private:
    double x,y,r;
public:
    double area;
    Circle() {
        x = 0;
        y = 0;
        r = 1;
        area = 	M_PI * r * r;
        
    }
    Circle(double xx, double yy, double rr) {
        x = xx;
        y = yy;
        r = rr;
        area = 	M_PI * r * r;
    }
    void setX(double xx){
        x = xx;
    }
    void setY(double yy){
        y = yy;
    }
    void setR(double rr){
        r = rr;
        area = M_PI * r * r;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double getR(){
        return r;
        
    }
    
    
};

