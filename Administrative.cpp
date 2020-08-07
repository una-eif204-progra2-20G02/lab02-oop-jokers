//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"


Administrative::Administrative(){}
Administrative::Administrative(double monthlySalary){}
Administrative::Administrative(double monthlySalary, const string firstName, const string lastName, const int documentId): Person(firstName,  lastName, documentId) {
  this-> monthlySalary= monthlySalary;
}
virtual Administrative::~Administrative(){}
double Administrative::getMonthlySalary(){
  return monthlySalary;
}
void Administrative::setmonthlySalary(double monthlySalary){
  this->monthlySalary=monthlySalary;
}

double Administrative::Salary(){
   return  getMonthlySalary;
}

string Administrative::toString(){
  stringstream s;
  s<<"Informacion"<<Person::toString()<<endl;
  s<< "Monthly Salary: "<<Salary<<endl;
  return s.str();
}

