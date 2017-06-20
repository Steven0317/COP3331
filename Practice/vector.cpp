//
//  vector.cpp
//  
//
//  Created by Mac on 6/17/17.
//
//
#include<vector>
#include<iostream>
#include "vector.hpp"

using namespace std;


struct fizz{
    
    int x;
    int y;
    
};


int main(){
    
    vector < int > vec;
    
    
    int j;
    
    
    for( int i = 0; i <  5; i++){
        
        cout << " Enter a number to add to the vector: \n";
        cin >> j;
        cout <<endl;
        
        vec.push_back(j);
    }
    
    cout << endl;
    cout << "Numbers entered in vector" <<endl;
    
    for (int vvec : vec){
        
        cout << vvec << endl;
    }
    
    while(!vec.empty()){
        
        cout << "Clearing the vector" <<endl;
        
        vec.pop_back();
    }
    
    cout << "All done, Goodbye!"<<endl;
    
    return 0;
}
