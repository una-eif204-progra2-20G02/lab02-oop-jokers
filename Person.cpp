//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person::Person(){
    firstName="";
    lastName="";
    documentId=0;
}
Person::Person(const std::string& firstName, const std::string& lastName, int documentId)
{
  this->firstName=firstName;
  this->lastName=lastName;
  this->documentId=documentId;
}
std::string Person::getFirstName()
{
  return this->firstName;
}
void Person::setFirstName(const std::string &firstName) {  this->firstName=firstName;}

std::string Person::getLastName()
{
  return this->lastName;
}
void Person::setLastName(const std::string &lastName) {  this->lastName=lastName;}
int Person:: getDocumentId()
{
  return this->documentId;
}
void Person:: setDocumentId(int documentId)
{
  this->documentId=documentId;
}

const std::string Person::toString() {

    std::stringstream s;
s<<"Full name: "<<this->firstName<<" "<<this->lastName<<std::endl;
s<<"Id : "<<this->documentId<<std::endl;
return s.str();
 }