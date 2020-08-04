//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {
  private:
double monthlySalary;
double commissionRate;
public:
Professor();
Professor(monthlySalary:double,commissionRate:double);
professor(firstName:const std::string&,lastName:const std::string&,documentId:int,monthlySalary:double,commissionRate:double);
virtual; ~Professor();


};

#endif //LAB02_OOP_PROFESSOR_H
