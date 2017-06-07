/*
===================================================
Steven Faulkner
Contains employee class as well as default and
parameterized constructor, with inline functions
===================================================
*/

#ifndef employee_h
#define employee_h

#include<iostream>
#include<string>

using namespace std;

class Employee{

public:
//default constructor
Employee(){

   fullName = " ";
   monthlySalary = 0;
}
//parameter constructor
Employee(string n, int salary){

  fullName = n;
  monthlySalary = salary;

}

void setName(string n){

  fullName = n;
}

//adds new value to existing value
void setSalary(int n){

  monthlySalary += n;
}


string getName() const {

  return fullName;

}

int getSalary() const {

  return monthlySalary;

}

private:
  string fullName;
  int monthlySalary;


};
#endif
