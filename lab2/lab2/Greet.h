#ifndef Greet_h
#define Greet_h
// We should include <string> here
#include <string>
using namespace std;

/**
// Implement your "greet" function below
void greet(string name, void (*fcnPtr)(string)){
    
    if (name[0] == 'J'){
        fcnPtr =rude;
    }
    else{
        fcnPtr =polite;
    }
}
 
 **/

void polite(string);
void rude(string);


void greet(string name, void (*fcnPtr)(string)){
    
    if (name[0] == 'J'){
        fcnPtr =rude;
        (*fcnPtr)(name);
    }
    else{
        fcnPtr =polite;
        (*fcnPtr)(name);
    }
}

#endif /* Greet_h */
