//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person(){}
Person(string firstName, string lastName, int documentId)
{
  this->firstName=firstName;
  this->lastName=lastName;
  this->documentId=documentId;
}
string getFirstName()
{
  return this->firstName;
}
void setFirstName(string firstName)
{
  this->firstName=firstName;
}
string getLastName()
{
  return this->lastName;
}
void setLastName(string)
{
  this->lastName=lastName;
}
int getDocumentId()
{
  return this->documentId;
}
void setDocumentId(int documentId)
{
  this->documentId=documentId;
}
virtual double salary(){}
virtual string toString(){}