//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person::Person(){}
Person::Person(const std:string firstName, const std::string lastName, int documentId)
{
  this->firstName=firstName;
  this->lastName=lastName;
  this->documentId=documentId;
}
string Person::  getFirstName()
{
  return this->firstName;
}
void Person:: setFirstName(string firstName)
{
  this->firstName=firstName;
}
string Person::getLastName()
{
  return this->lastName;
}
void Person:: setLastName(string)
{
  this->lastName=lastName;
}
int Person:: getDocumentId()
{
  return this->documentId;
}
void Person:: setDocumentId(int documentId)
{
  this->documentId=documentId;
}

string Person::toString() { stringstream s;
s<<"El nombre completo de la persona es: "<<this->firstName<<" "<<this->lastName<<endl;
s<<"El id es: "<<this->documentId<<endl;
return s.str();
 }