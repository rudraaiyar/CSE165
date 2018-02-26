//
//  Header.h
//  Lab4
//
//  Created by Rudra Aiyar on 2/14/18.
//  Copyright © 2018 Rudra Aiyar. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include "Vec.h"
#include <iostream>

class Rect {
    //four float values
    float x,y, width, height;
    
public:
    Rect(float x1, float y1, float w, float h) {
        
        x = x1;
        y = y1;
        height = h;
        width = w;
    }
    
    //contains which checks if in or nah
    int contains(Vec n) { //n is our vector
        if (n.x >= x && n.x <= (x+width) && n.y <= y && n.y <= (y+height)){
            return 1; //yay
        }
        else
            return 0; //nope
    }
    
};
#endif /* Header_h */
