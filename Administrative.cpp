//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"


Administrative::Administrative(){

}
Administrative::Administrative(double monthlySalary){
    this->monthlySalary=monthlySalary;
}
Administrative::Administrative(const std::string &firstName, const std::string &lastName, int documentld,double monthlySalary) {

}
double Administrative::getMothlySalary() {return monthlySalary;}

void Administrative::setMonthlySalary(double monthlySalary) {  this->monthlySalary=monthlySalary;}

double Administrative::Salary(){
   return getMothlySalary();
}
std::string Administrative::toString(){
  std::stringstream s;
  s<<"Informacion"<<Person::toString()<<std::endl;
  s<< "Monthly Salary: "<<Salary()<<std::endl;
  return s.str();
}

