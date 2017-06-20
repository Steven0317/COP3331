//
//  random.cpp
//  
//
//  Created by Mac on 6/18/17.
//
//

#include<cstdlib>
#include<ctime>
#include <iostream>

using namespace std;

int main(){
    
    
    srand(static_cast<unsigned int>(time(0)));
    
    for( int i = 0; i < 10; i++){
        
        
        cout << rand() <<endl;
        
        
    }
    
    
    
    return 0;
}
