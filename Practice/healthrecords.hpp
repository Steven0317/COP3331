//
//  healthrecords.hpp
//  
//
//  Created by Mac on 6/20/17.
//
//

#ifndef healthrecords_hpp
#define healthrecords_hpp

#include <iostream>
#include <string>


class HealthRecord{
    
private:
    std::string Fname;
    std::string Lname;
    std::string gender;
    int month;
    int day;
    int year;
    int height;
    int weight;
    int age;
    
public:
    
    HealthRecord(std::string fn, std::string ln, std::string gen,int month,
                 int d, int y, int h, int w);
    
    void setFname(std::string fn);
    std::string getFname();
    void setLname(std::string ln);
    std::string getLname();
    void setGender(std::string g);
    std::string getGender();
    void setBirth(int x, int y, int z);
    void getBirth();
    void setHeight(int x);
    int getHeight();
    void setWeight(int x);
    int getWeight();
    int getAge();
    int getMax();
    void getTarget();
    double getBMI();
    void getInfo();
};

#endif /* healthrecords_hpp */
