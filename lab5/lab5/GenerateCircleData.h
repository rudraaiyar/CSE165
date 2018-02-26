#ifndef GenerateCircleData_h
#define GenerateCircleData_h
//#include <vector>
#include "Vec.h"
//#include <math.h>

using namespace std;

void generateCircleData(std::vector<Vec*>& points, const Vec& center, float radius, int resolution){
    // Clear the points vector to make sure it's empty before you start
    points.clear();
    
    // Provide the rest of the code here...
    
    float angle=0;
    for( int i=0; i<resolution; i++)
    {
        angle = i * (360 / resolution);
        float degree = (angle * M_PI / 180);
        
        float x = center.getX() + cos(degree)*radius;
        float y = center.getY() + sin(degree)*radius;
        
        points.push_back(new Vec(x,y));
        //pushing entire object: vec of x,y being pushed into larger vec obj
        //x[i]=points.at(i)->setX(x);
        //points[i]->setX(x); //make new obj before using set/get
        //points[i]->setY(y);

    }
   // cout<< points.size()<<endl;
}

#endif
