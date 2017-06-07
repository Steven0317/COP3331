/*
==================================
Steven Faulkner
Driver program for employee header
hard codes one employee object
while prompting user input for the
other, then displays the information
==================================
*/

#include<iostream>
#include<string>
#include "employee.h"

using namespace std;

int main(){

  int salary;
  string name;

  //first employee object created with name and salary
  Employee emp1("John Stamos", 2500);
  //second employee object created
  Employee emp2;

  //second employee name and salary prompted then stored
  cout << "Enter an employee name: "<< endl;
  getline(cin, name);

  emp2.setName(name);

  cout << "Enter the employee's monthly salary" << endl;
  cin >> salary;

  emp2.setSalary(salary);

  //display initial values for both objects
  cout << "Here are the employees and their yearly salaries" << endl;
  cout << emp1.getName() << ": $" << emp1.getSalary() * 12 << endl;
  cout << emp2.getName() << ": $" << emp2.getSalary() * 12<< endl;

  //modify the base salary with a raise
  emp1.setSalary(emp1.getSalary() * .10);
  emp2.setSalary(emp2.getSalary() * .10);

  //redisplay the information with new salary
  cout << "And here are the employee's after a 10% raise" << endl;
  cout << emp1.getName() << ": $" << emp1.getSalary() * 12 << endl;
  cout << emp2.getName() << ": $" << emp2.getSalary() * 12 << endl;


  return 0;
}
