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
double Administrative::getMothlySalary() {return monthlySalary;}

void Administrative::setMonthlySalary(double monthlySalary) {  this->monthlySalary=monthlySalary;}

double Administrative::Salary(){
   return getMothlySalary();
}
const std::string Administrative::toString(){
  std::stringstream s;
  s<<"Information "<<Person::toString()<<std::endl;
  s<< "Monthly Salary: "<<Salary()<<std::endl;
  return s.str();
}

