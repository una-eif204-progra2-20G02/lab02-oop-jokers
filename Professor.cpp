//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "Professor.h"
#include "Persona.h"
using namespace std;
class Professor: public Persona {
private:
double monthlySalary;
double commissionRate;
public:
Professor(){

}
Professor(double monthlySalary, double commissionRate){
  this-> monthlySalary= monthlySalary;
this-> commissionRate= commissionRate;}

Professor(double monthlySalary, double commissionRate, const string& lastName, const string& firstName, const string& documentId): Persona(firstName, lastName, documentId) {
  this-> monthlySalary= monthlySalary;
this-> commissionRate= commissionRate;}

virtual ~Professor(){}
getCommissionRate(){
  return commissionRate;
}
setCommissionRate(double commissionRate){
this->commissionRate=newComission;
}
getMonthlySalary(){
  return monthlySalary;
}
set monthlySalary(double monthlySalary){
  this->monthlySalary=monthlySalary;
}
double Salary(){
   return (commissionRate*monthlySalary)+ monthlySalary;
}

string toString(){
  stringstream s;
  s<<"Profesor Information: "<< firstName<<endl;
  s<< "Doc Id: "<< documentId<<", "<< "Monthly Salary: "<<Salary<<endl;
  resturn s.str();
}

};