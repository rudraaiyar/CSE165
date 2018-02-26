//
//  main.cpp
//  lab1
//
//  Created by Rudra Aiyar on 1/24/18.
//  Copyright © 2018 raiyar. All rights reserved.
//
#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
#include <locale>

using namespace std;

int main()
{
    /*
     //part 1
     cout << "Hello World\n";
    */
    /*
     //part 2
    float radius, area;
    cin>>radius;
    area=M_PI *radius*radius;
    cout<<area<<endl;
     */
    
    /*
    //part 3 and 4
    int n;
    while (n != -1)
    {
        cin>>n;
        if (n<0)
            return NULL;
        else if(n%2==0)
            cout<<"EVEN"<<endl;
        else
            cout<<"ODD"<<endl;
    }
     */
    /*
    //part 5
    string repeat;
    getline(cin, repeat);
    
    int lines;
    cin>>lines;
    
    for(int i=0; i<lines; i++){
        cout<<repeat<<endl;
    }
     */
    
    //part 6 and 7
    ifstream File("words.txt");
    string word;
    string sample;
    cin>>sample;
    int first=0;
    
    string firstCap = sample;
    string allCap = sample;
    
    firstCap[0] = toupper(firstCap[0]);
    for (int i=0; allCap[i]; i++) allCap[i] = toupper(allCap[i]);
    
   // string arr[]={sample, firstCap, allCap};
    while (File >> word)
    {
        if (word == sample || word == allCap ||word == firstCap){
            ++first;
        }else{
            continue;
        }
    }
    cout<<first<<endl;

/*
     //part 8
    char code =0;
    int amount =0;
    
    while (amount != -2 )
    {
        cin>>code;
        cin>>amount;
        if (code == 'N' && amount == -1)
        {
            cout<<""<<endl;
           // break;
        }
        else{
            for (int i=0; i<amount; i++)
            {
                cout<<code;
               // break;
            }
        }
        
    }
*/
/*
    //part 9
    int N=0;
    cin>>N;
    int num=0;
    int count;
    //dont include 1
    for(int j = 1; j < N; j++)
    {
        num++;
        count = 0;
        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            cout<< num << '\n';
        }
    }
*/
/*
    //part 10
    string store[20];
    int i=0;
    string input;
    
    for (i=0; i<15;i++){
        cin>>input;
        
        if(input=="quit"){
            return 0;
        }
        else if (input.length()>1) {
            store[i]=input;
        }
       else if(input.length()==1){
           if(store[i] == input){
               
           }else{
               cout<<"";
           }
           cout<<"";
        }else {
            return 0;
        }
    }
    cout<<store;
*/
    return 0;
}
