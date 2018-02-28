//
//  objectCounting.hpp
//  
//
//  Created by Rudra Aiyar on 2/28/18.
//
//
#ifndef Generic_h
#define Generic_h


class Generic {
public:
    int data;
    static int count;
public:
    Generic() {
        data = 0;
        count++;
    }
    
    Generic(int d) {
        data = d;
        count++;
    }
};

int Generic::count;


#endif
