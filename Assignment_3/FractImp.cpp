/*
============================
Steven Faulkner
Implementation file containing
actual functions with prototypes
provided by fraction.h
============================
*/


#include<iostream>
#include "fraction.h"



//default constructor
Fraction::Fraction(){

  numerator = 0;
  denominator = 1;

}
//constructor with parameters
void Fraction::setFraction(int x, int y){

    //cin >> x >> y;

    numerator = x;
    denominator = y;

}
//simplify function
void Fraction::simplify(){

    for(int i = numerator * denominator; i > 1; i--){

        if(( denominator % i  == 0) && ( numerator % i == 0)){

            numerator = numerator /i;
            denominator = denominator /i;
        }
    }

}
//overload binary operator +
Fraction Fraction:: operator +(const Fraction& right){

    Fraction temp;

    if (denominator == right.denominator){

        temp.numerator = numerator + right.numerator;
        temp.denominator = denominator;

    }else{

        temp.numerator = numerator * right.denominator + right.numerator *denominator;
        temp.denominator = denominator * right.denominator;

    }

    temp.simplify();

    return temp;
}
//overload binary operator -
Fraction Fraction:: operator -(const Fraction& right){

    Fraction temp;

    if(denominator == right.denominator){

        temp.numerator = numerator - right.numerator;
        temp.denominator = denominator;
    }else{

        temp.numerator = numerator * right.denominator - right.numerator * denominator;
        temp.denominator = denominator * right.denominator;

    }

    temp.simplify();

    return temp;

}
//overload binary operator *
Fraction Fraction:: operator *(const Fraction& right){

    Fraction temp;

    if( denominator == right.denominator){

        temp.numerator = numerator * right.numerator;
        temp.denominator = denominator;

    }else{

        temp.numerator = numerator * right.numerator;
        temp.denominator = denominator * right.denominator;
    }

    temp.simplify();

    return temp;

}
//overload binary operator /
Fraction Fraction:: operator /(const Fraction& right){

    Fraction temp;

    if(denominator == right.denominator){

        temp.numerator = numerator * right.denominator;
        temp.denominator = denominator;

    }else{

        temp.numerator = numerator * right.denominator;
        temp.denominator = denominator * right.numerator;

    }

    temp.simplify();

    return temp;
}
//overload the operator <<
 ostream& operator << (ostream& os, const Fraction& fraction){
 //note that we print out a / as it is simply easier to do so!
 os << fraction.numerator << "/" << fraction.denominator;
 return os;
}
//overload the operator >>
istream& operator>> (istream& is, Fraction& fraction){
 char ch;

 is >> fraction.numerator; //get the numerator
 is >> ch; //read and discard the '/'
 is >> fraction.denominator; //get the denominator

 return is;
}

