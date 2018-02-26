//
//  Entry.h
//  lab3
//
//  Created by Rudra Aiyar on 2/7/18.
//  Copyright © 2018 Rudra Aiyar. All rights reserved.
//

#ifndef Entry_h
#define Entry_h

#include <iostream>
#include <string>
using namespace std;

struct Entry
{
    string name;
    string last;
    string emailadd;
    
    void setName(string firstName){
        name = firstName;
    }
    
    void setLastname(string lastName){
        last = lastName;
    }
    
    void setEmail(string email){
        emailadd = email;
    }
    
    void print(){
        cout << "First Name: " << name << endl;
        cout << "Last Name: " << last << endl;
        cout << "Email: " << emailadd << endl;
    } 
}; 
#endif /* end Entry_h */
