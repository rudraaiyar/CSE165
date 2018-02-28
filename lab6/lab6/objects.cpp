//
//  objects.cpp
//  lab6-1
//
//  Created by Rudra Aiyar on 2/28/18.
//  Copyright © 2018 Rudra Aiyar. All rights reserved.
//


#include <iostream>
#include "Object.h"

using namespace std;

int Object::count = 0;

Object f(Object someObject){
    return someObject;
}

int main(int argc, const char * argv[])
{
    
    Object myObject;
    
    Object another;
    
    cout << another.count << endl;
    return 0;
}

