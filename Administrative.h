//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {
private:
    double monthlySalary;
public:
    Administrative();
    Administrative(double monthlySalary);
    Administrative(const std::string& firstName,const std::string& lastName,int documentld,double monthlySalary){};
    double getMothlySalary();
    void setMonthlySalary(double monthlySalary);
    double Salary() ;
    const std::string toString() ;

};


#endif //LAB02_OOP_ADMINISTRATIVE_H
