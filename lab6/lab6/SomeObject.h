//
//  constants.hpp
//  lab6-1
//
//  Created by Rudra Aiyar on 2/28/18.
//  Copyright © 2018 Rudra Aiyar. All rights reserved.
//


#include <stdio.h>

#ifndef SomeObject_h
#define SomeObject_h

class SomeObject {
    int data;
    
public:
    SomeObject() {
        data = 0;
    }
    
    SomeObject(int d) {
        data = d;
    }
    
    int getData() const{
        return data;
    }
    
    void setData (int d) {
        data = d;
    }
};

#endif
