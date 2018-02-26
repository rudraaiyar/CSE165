//
//  Header.h
//  Lab4
//
//  Created by Rudra Aiyar on 2/14/18.
//  Copyright © 2018 Rudra Aiyar. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>


class Rect{
    //four float values
public:
    float x,y, width, height;
    bool click;
    
    public:
        Rect(float x1, float y1, float w, float h) {
            x = x1;
            y = y1;
            height = h;
            width = w;
        }
    
        //contains which checks if in or nah
        bool contains(float xx, float yy)
        {
            if (xx >= x && xx <= x + width && yy <= y && yy >= y - height)
                return true;
            else
                return false;
        }
};

#endif
