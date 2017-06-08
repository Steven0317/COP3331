/*
==================================
Steven Faulkner
Header file for Fraction class
with in-line functions
==================================
*/

#ifndef FRACTION_H
#define FRACTION_H


#include<iostream>



using namespace std;

class Fraction{

public:


  //constructor
  Fraction();


  //mutator
  void setFraction(int, int);


  //accessors
  int getNumerator() const{

    return numerator;

  }

  int getDenominator() const{

    return denominator;

  }



  //overloaded operator functions
  Fraction operator +(const Fraction &);

  Fraction operator -(const Fraction &);

  Fraction operator *(const Fraction &);

  Fraction operator /(const Fraction &);

  friend ostream& operator <<(ostream& os,const Fraction& fraction);

  friend istream& operator >> (istream& os, Fraction& fraction);



private:
  int numerator;
  int denominator;

  //simplifying function
  void simplify();
};
#endif
