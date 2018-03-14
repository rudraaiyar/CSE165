//
//  main.cpp
//  midterm prep
//
//  Created by Rudra Aiyar on 3/1/18.
//  Copyright © 2018 Rudra Aiyar. All rights reserved.
//

#include <iostream>

using namespace std;
/**
class  Shape {
    public:Shape  () {
        cout  << "Shape()" << endl;
    }
   ~Shape (){
       cout  << " ̃Shape()" << endl;
   }
};
class  Rectangle: public  Shape {
    public:Rectangle () {
        cout  << "Rectangle ()" << endl;
    }
   ~Rectangle (){
       cout  << " ̃Rectangle ()" << endl;
   }
};
int  main() {
    Rectangle r;
    Rectangle* p = new  Rectangle ();
   }
**/
class  Shape {float x;float y;public:Shape  () {cout  << "Creating a Shape" << endl;}void  draw (){cout  << "Drawing a Shape" << endl;};virtual ~Shape (){cout  << "Deleting a Shape" << endl;}};class  Circle: public  Shape {public:Circle  () {cout  << "Creating a Circle" << endl;}void  draw() {cout  << "Drawing a Circle" << endl;}~Circle (){cout  << "Deleting a Circle" << endl;}};

int  main() {
    Shape* s = new  Circle ();
    s->draw ();
    delete s;
    
    Circle* c =new Circle();
    c->draw();
}
