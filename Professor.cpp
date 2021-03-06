//
// Created by Maikol Guzman on 8/2/20.
//
#include "Professor.h"

Professor::Professor() {}
Professor::Professor(double monthlySalary, double commissionRate){
  this-> monthlySalary= monthlySalary;
  this-> commissionRate= commissionRate;
}
Professor::~Professor() {}
double Professor::getCommissionRate() { return commissionRate;}

void Professor::setCommissionRate(double commissionRate) {
    this-> commissionRate = commissionRate;
}
double Professor::getMonthlySalary(){
    return monthlySalary;
}
void Professor::setMonthlySalary(double monthlySalary) {
    this->monthlySalary=monthlySalary;
}
double Professor::Salary(){
   return (getCommissionRate()*getMonthlySalary())+ getMonthlySalary();
}
const std::string Professor::toString(){
  std::stringstream s;
  s<<"Information "<<Person::toString()<<std::endl;
  s<< "Monthly Salary: "<<getMonthlySalary()<<std::endl;
  return s.str();
}