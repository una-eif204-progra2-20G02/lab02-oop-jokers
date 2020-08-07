//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <iostream>
#include<sstream>

using namespace std;
/**
 * Abstract Class of Person
 */
class Person {

private:
string firstName;
string lastName;
int documentId;

public:
Person();
Person(const string firstName, const string lastName, int documenteId);
string getFirstName();
void setFirstName(string firstName);
string getLastName();
void setLastName(string);
int getDocumentId();
void setDocumentId(int documentId);
virtual  double salary()=0;
virtual string toString();

};


#endif //LAB02_OOP_PERSON_H
