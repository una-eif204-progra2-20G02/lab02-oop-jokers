//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <iostream>
#include<sstream>

/**
 * Abstract Class of Person
 */
class Person {

private:
std::string firstName;
std::string lastName;
int documentId;

public:
Person();
Person(const std::string& firstName, const std::string& lastName, int documenteId);
std::string getFirstName();
void setFirstName(const std::string &firstName);
std::string getLastName();
void setLastName(const std::string&);
int getDocumentId();
void setDocumentId(int documentId);
virtual const double salary()=0;
virtual const std::string toString();

    void setFirstName(std::string &firstName);
};


#endif //LAB02_OOP_PERSON_H
