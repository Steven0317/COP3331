/*
===========================
Steven Faulkner
Driver program to test functionality
of operator overloads
===========================
*/

#include<iostream>
#include "fraction.h"



int main(){


Fraction fr1;
Fraction fr2;
Fraction fr3;


//user input for first fraction

cout << "Enter the first fraction in the form of a/b: ";
cin >> fr1;

//user input for second fraction

cout << "Enter the second fraction in the form of a/b: ";
cin >> fr2;


//display fractions entered
cout <<endl;
cout << "Fraction 1 = "<<fr1<< endl;
cout << "Fraction 2 = " << fr2 << endl;

//add fractions
cout << endl;
fr3 = fr1+fr2;

cout << " " << fr1 << " + " << fr2 << " = " <<fr3 << endl;


//subtract fractions
fr3 = fr1 - fr2;

cout << " " << fr1 << " - " << fr2 << " = " <<fr3 << endl;


//multiply fractions
fr3 = fr1 * fr2;

cout << " " << fr1 << " * " << fr2 << " = " <<fr3 << endl;

//divide fractions
fr3 = fr1 / fr2;

cout <<"(" << fr1 << ")" << " / " << "(" << fr2 << ")" << " = " <<fr3 <<endl;


return 0;
}
