#include <iostream>
#include <string>
#include <vector>

#include "Dog.h"
#include "display.h"
using namespace std;

int main(){
    vector<Animal*> v;
    
    int N;
    char type;
    string name;
    int age;
    
    cin >> N;
    
    while (N > 0){
        cin >> type;
        cin >> name;
        cin >> age;
        if (type == 'D'){
            
            Dog *d = new Dog(name ,age);
            v.push_back(d);
            N--;
            
        }
        else if (type == 'A'){
            
            Animal *a = new Animal();
            
            a->setName(name);
            a->setAge(age);
            
            v.push_back(a);
            
            N--;
        }
        else {
            N--;
            continue;				
        }
        
    }
    
    display(v);
    
    return 0;
}
