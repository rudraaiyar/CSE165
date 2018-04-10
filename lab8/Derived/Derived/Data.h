#include <iostream>
#include <vector>
using namespace std;

class Data{
    
public:
    vector<int>v;
public:
    Data() {
    }
    ~Data() {
    }
    void add(int s) {
        v.push_back(s);
    }
    
    bool compare(int s)
    {
        //cout << "calling data.h " << endl;
        return NULL;
    }
    
    void print() {
        for(int i = 0; i < v.size(); i++){
            //v[i]->print();
            cout << v[i] << " ";

        }
        cout << endl;
    }
    
    /*void sort()
    {
        int n = v.size();
        int temp;
        for(int i =0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
               // if (v[j+1]->compare(v[j])){
                    temp = v[j];
                    v[j] = v[j+1];
                    v[j+1] = temp;
              //  }
            }
        }
    }*/
    
    void sort()
    {
        int n = v.size();
        int temp;

        for(int i=1;i<n;++i)
        {
            for(int j=0;j<(n-i);++j)
                if(v[j]>v[j+1])
                {
                    temp=v[j];
                    v[j]=v[j+1];
                    v[j+1]=temp;
                }
        }
    }
};
