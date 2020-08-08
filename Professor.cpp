//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "Professor.h"

//Professor::Professor() {}
Professor::Professor(double monthlySalary, double commissionRate){
  this-> monthlySalary= monthlySalary;
  this-> commissionRate= commissionRate;
}

Professor::Professor(double monthlySalary, double commissionRate, const std::string firstName, const std::string lastName, const int documentId): Person(firstName,  lastName, documentId) {
  this-> monthlySalary= monthlySalary;
this-> commissionRate= commissionRate;
}

//Professor::~Professor() {}
double Professor::getCommissionRate() { return commissionRate;}

void Professor::setCommissionRate(double commissionRate){
this->commissionRate=commissionRate;
}
double Professor::getMonthlySalary(){
  return monthlySalary;
}
void Professor::setmonthlySalary(double monthlySalary){
  this->monthlySalary=monthlySalary;
}
double Professor::Salary(){
   return (getCommissionRate*getMonthlySalary)+ getMonthlySalary;
}

const std::string Professor::toString(){
  std::stringstream s;
  s<<"Informacion"<<Person::toString()<<std::endl;
  s<< "Monthly Salary: "<<Salary<<std::endl;
  return s.str();
}
// da errores de "x already has a body".