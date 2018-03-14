//
//  Dog.h
//  Lab7
//
//  Created by Rudra Aiyar on 3/14/18.
//  Copyright © 2018 Rudra Aiyar. All rights reserved.
//

#ifndef Dog_h
#define Dog_h

#include <string>

#include "Animal.h"

class Dog: public Animal {
    
public:
    Dog(){
        cout << "Creating Dog" << endl;
        setName("");
        setAge(0);
    }
    
    Dog(string n, int a){
        
        cout << "Creating Dog" << endl;
        setName(n);
        setAge(a);
    }
    
    ~Dog(){
        cout << "Deleting Dog" << endl;
    }
    
    void feed(){
        cout << "A bone, please!" << endl;
    }
    
};

#endif /* Dog_h */

#pragma region "Animal"
