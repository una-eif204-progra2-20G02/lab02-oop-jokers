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
Professor(){};
Professor(double monthlySalary, double commissionRate){};
Professor(double monthlySalary, double commissionRate, const std::string lastName, const std::string firstName, const int documentId): Person(firstName, lastName, documentId) {};
virtual ~Professor(){};
double getCommissionRate(){};;
double getMonthlySalary(){};
void setMonthlySalary(double monthlySalary){};
double Salary() {};
const std::string toString(){};
};

#endif //LAB02_OOP_PROFESSOR_H
