//
//  constants.cpp
//  lab6-1
//
//  Created by Rudra Aiyar on 2/28/18.
//  Copyright © 2018 Rudra Aiyar. All rights reserved.
//

#include <iostream>
#include "SomeObject.h"

using namespace std;

int getData(const SomeObject& x){
    return x.getData();
}

int main(int argc, const char * argv[]) {
    int num = getData(SomeObject(53));
    
    cout << num << endl;
    
    return 0;
}
