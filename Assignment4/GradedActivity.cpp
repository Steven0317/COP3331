//
//  GradedActivity.cpp
//  
//
//  Created by Steven Faulkner on 6/21/17.
//
//  Driver program to test functionality of Parent/child class
//

#include <iostream>
#include <stdexcept>

#include "GradedActivity.hpp"
#include "Essay.hpp"

using namespace std;

int main(){
    
    //object initialization
    Essay e1(0,0,0,0,0);
    GradedActivity *activity = &e1;
    
    double gram, spell, len, cont;
    
    //asks user for data to send to object later
    cout << "How many grammar points did the student earn? (0 - 30): ";
        cin >> gram;

        if((gram < 0) || (gram > 30)){
            cerr << "Invalid argument, enter a number between 0 and 30: ";
            cin >> gram;
        }
    cout << "How many spelling points did the student earn? (0-20): ";
       cin >> spell;

       if((spell < 0) || (spell > 20)){
           cerr << "Invalid argument, enter a number betweeen 0 and 20: ";
           cin >> spell;
       }
       
    cout << "How many points for length did the student earn (0-20): ";
       cin >> len;
       
           if((len < 0) || ( len > 20)){
               cerr << "Invalid argument, enter a number betweeen 0 and 20: ";
               cin >> len;
           }
    
    cout << "How many points for content did the student earn (0-30): ";
           cin >> cont;
           
           if((cont < 0) || (cont > 30)){
            cerr << "Invalid argument, enter a number between 0 and 30: ";
            cin >> cont;
        }
    
    
    //set object members
    e1.setGrammar(gram);
    e1.setSpelling(spell);
    e1.setLength(len);
    e1.setContent(cont);
    
    //display object values
    cout << "Grammar: " << e1.getGrammar() << endl;
    cout << "Spelling: " << e1.getSpelling() << endl;
    cout << "Length: " << e1.getLength() << endl;
    cout << "Content: " << e1.getContent() << endl;
    
    //pointer to call parent function
    activity->setScore(activity->getScore());
    
    cout << "Letter Grade: " << activity->getLetterGrade() << endl;
    
    return 0;
}

