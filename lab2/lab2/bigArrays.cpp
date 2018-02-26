#include <iostream>
#include "FillUp.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Read in the size from the user
    int size;
    cin >>size;
    
    
    // Create an array of appropriate size
    //int arr[size];
    int* array =new int[size];
    
    // Call the fillUp function
    fillUp(array, size);
    
    // Call the printPos function on last position
    printPos(array, size-1);
    
    delete[] array;
    
    
    return 0;
}
