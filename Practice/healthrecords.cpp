//
//  healthrecords.cpp
//  
//
//  Created by Mac on 6/20/17.
//
//

#include <iostream>
#include <string>
#include "healthrecords.hpp"

using namespace std;

int main(){
    
    string fname, lname, gender;
    int m,d,y,h,w;
    
    cout << "Enter first and last name: ";
    cin >> fname;
    cin.get();
    cin >> lname;
    
    
    
    cout << "Enter gender: ";
    cin >> gender;
    
    cin.ignore();
    
    cout << "Enter birthday in mm/dd/yyy format: ";
    cin >> m;
    cin.get();
    cin >> d;
    cin.get();
    cin >> y;
 
    cout << "Enter height in inches: ";
    cin >> h;
    
    cout << "Enter weight in pounds: ";
    cin >> w;
 
    
    HealthRecord p1(fname,lname,gender,m,d,y,h,w);
   
    cout << "\n\n\n "<< endl;
    
    cout << "Name:" <<p1.getFname() << " " << p1.getLname() << endl;
    cout << "Gender: " << p1.getGender() << endl;
    cout << "Date of Birth: " << m <<"/" << d << "/" << y << endl;
    
    cout << "Height in Inches: " << p1.getHeight() << " inches" << endl;
    
    cout << "Weight in pounds: " << p1.getWeight() <<" pounds" <<endl;
    
    cout << "Age: " << p1.getAge() << " year's old"<< endl;
    
    cout << "BMI: " << p1.getBMI() << endl;
   
    
    cout << "Maximum Heart Rate: " << p1.getMax() << " beats per minute" << endl;
    
    cout << "Target Heart Rate: ";
    p1.getTarget();
    cout << " beats per minute" << endl;
    
    cout << "\n";
    p1.getInfo();
    
    cout <<"\n\n\n"<<endl;
    return 0;
}
