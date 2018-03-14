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
        area = r*r*M_PI;
    }
    
    Circle(double x1, double y1, double r1) {
        x = x1;
        y = y1;
        r = r1;
        area = 	M_PI * r * r;
    }
    
    void setX(double x1){
        x = x1;
    }
    
    void setY(double y1){
        y = y1;
    }
    
    void setR(double r1){
        
        r = r1;
        
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

