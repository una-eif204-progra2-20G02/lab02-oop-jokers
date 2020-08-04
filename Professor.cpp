//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "Professor.h"
using namespace std;

Professor::Professor(){

}
Professor::Professor(double monthlySalary, double commissionRate){
  this-> monthlySalary= monthlySalary;
this-> commissionRate= commissionRate;}

Professor::Professor(double monthlySalary, double commissionRate, const string firstName, const string lastName, const string documentId): Person(firstName,  lastName, documentId) {
  this-> monthlySalary= monthlySalary;
this-> commissionRate= commissionRate;}

virtual Professor::~Professor(){}
double Professor::getCommissionRate(){
  return Professor::commissionRate;
}
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
   return (commissionRate*monthlySalary)+ monthlySalary;
}

string Professor::toString(){
  stringstream s;
  s<<"Profesor Information: "<< getFirstName()<<endl;
  s<< "Doc Id: "<< getDocumentId()<<", "<< "Monthly Salary: "<<Salary<<endl;
  return s.str();
}

};