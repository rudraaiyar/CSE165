
//  lab6-1
//
//  Created by Rudra Aiyar on 2/28/18.
//  Copyright © 2018 Rudra Aiyar. All rights reserved.
//

#ifndef Object_h
#define Object_h

#include <stdio.h>
class Object{
public:
    static int count;
    Object(){
        count++;
    }
    Object(const Object&wee){
        count++;
    }
    
};


#endif /* Object_hp */
