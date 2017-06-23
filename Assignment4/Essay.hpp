//
//  Esaay.hpp
//  
//
//  Created by Steven Faulkner on 6/21/17.
//
//  child class for Graded Activity - defines the grading criteria for the "essay"

#ifndef Esaay_h
#define Esaay_h


#include <iostream>


#include "GradedActivity.hpp"

class Essay : public GradedActivity{
    
private:
    double grammar;
    double spelling;
    double length;
    double content;
    
    
public:
    //constructor
    Essay(const double &gram,const double &spell,const double &len,const double &cont,const double &score)
    : GradedActivity(score){
        
        setGrammar(gram);
        setSpelling(spell);
        setLength(len);
        setContent(cont);
    }
    
    //accessor and mutator for grammar
    void setGrammar(const double &x){
    
            grammar = x;
            
    }
           
           
    double getGrammar(){
        
        return grammar;
    }
    
    
           
     //accessor and mutator for spelling
    void setSpelling(const double &x){
    
            spelling = x;

    }
           
           
    double getSpelling(){
        
        return spelling;
    }
    
           
    //accessor and mutator for length
    void setLength(const double &x){
        
            length = x;

    }
           
           
    double getLength(){
        
        return length;
    }
           
           
    //accessor and mutator for content
    void setContent(const double &x){
        
           content = x;
        
    }
           
           
    double getContent(){
        
        return content;
    }
    
    
    //adds all members and return s value
    virtual double getScore() const {
        
        return grammar + spelling + length + content;
    }
    
    //takes the integer and cmopares it for a letter grade
    virtual char getLetterGrade() const {
        
        return GradedActivity::getLetterGrade();
    }
    
};

#endif /* Esaay_h */
