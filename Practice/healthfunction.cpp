//
//  healthfunction.cpp
//  
//
//  Created by Mac on 6/20/17.
//
//

#include <iostream>
#include <string>
#include<ctime>

#include "healthrecords.hpp"

using namespace std;

HealthRecord::HealthRecord(string fn, string ln, string gen,int m,
                           int d, int y, int h, int w){

                             
                             Fname = fn;
                             Lname = ln;
                             gender = gen;
                             month = m;
                             day = d;
                             year = y;
                             height = h;
                             weight = w;
                             
                    }

void HealthRecord::setFname(string fn){
    
    Fname = fn;
}



string HealthRecord::getFname(){
    
    return Fname;
    
}


void HealthRecord::setLname(string ln){
    
    Lname = ln;
}


string HealthRecord::getLname(){
    
    return Lname;
}


void HealthRecord::setGender(string g){
    
    gender = g;
}


string HealthRecord::getGender(){
    
    return gender;
}

void HealthRecord::setBirth(int x, int y, int z){
    
    month = x;
    day = y;
    year = z;
}

void HealthRecord::getBirth(){
    
    
    cout << month <<"/" <<day<< "/" << year;
    
}

void HealthRecord::setHeight(int x){
    
    height = x;
    
}

int HealthRecord::getHeight(){
    
    return height;
}

void HealthRecord::setWeight(int x){
    
    weight = x;
}

int HealthRecord::getWeight(){
    
    return weight;
    
}

int HealthRecord::getAge(){
    
    time_t now = time(0);
    
    
    tm *tptr = localtime(&now);
    
    age = 1900 + tptr->tm_year - year;
    
    return age;
}

int HealthRecord::getMax(){
    
    
    return 220 - age;
}

void HealthRecord::getTarget(){
    
    int a, b;
    
    a = (220 - age) * .5;
    b = (220 - age) * .85;
    
    cout << a << "-" << b ;
}

double HealthRecord::getBMI(){
    
    
    return (weight * 703)/(height * height);
}

void HealthRecord::getInfo(){
    
    
    cout << "Underweight:  less than 18.5" << endl;
    cout << "Normal:       between 18.5 and 24.9" << endl;
    cout << "Overweight:   between 25 and 29.9" << endl;
    cout << "Obese:        30 or greater" << endl;
    
    double x;
    
    x = getBMI();
    
    cout << "\n";
    
    if(x < 18.5){
        cout << "You are underweight" << endl;
        
    }else if(x >= 18.5 && x < 25 ){
        cout << " You are normal weight" << endl;
        
    }else if(x >= 25 && x < 30){
        
        cout << " You are overweight" << endl;
        
    }else{
        
        cout << "You are obese" << endl;
    }
}
