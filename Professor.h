//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"
using namespace std;
class Professor: public Person {
  private:
double monthlySalary;
double commissionRate;
public:
Professor(){};
Professor(double monthlySalary, double commissionRate){};
Professor(double monthlySalary, double commissionRate, const string lastName, const string firstName, const string documentId): Person(firstName, lastName, documentId) {};
virtual ~Professor(){};
double getCommissionRate(){};
void setCommissionRate(double commissionRate){};
double getMonthlySalary(){};
void setmonthlySalary(double monthlySalary){};
double Salary(){};
string toString(){};
~Professor() {};

};

#endif //LAB02_OOP_PROFESSOR_H
