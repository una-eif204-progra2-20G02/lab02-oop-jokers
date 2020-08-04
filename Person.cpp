//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person::Person(){}
Person::Person(const string firstName, const string lastName, int documentId)
{
  this->firstName=firstName;
  this->lastName=lastName;
  this->documentId=documentId;
}
Person::string getFirstName()
{
  return this->firstName;
}
Person::void setFirstName(string firstName)
{
  this->firstName=firstName;
}
Person::string getLastName()
{
  return this->lastName;
}
Person::void setLastName(string)
{
  this->lastName=lastName;
}
Person::int getDocumentId()
{
  return this->documentId;
}
Person::void setDocumentId(int documentId)
{
  this->documentId=documentId;
}
Person::virtual double salary(){}
Person::virtual string toString(){}