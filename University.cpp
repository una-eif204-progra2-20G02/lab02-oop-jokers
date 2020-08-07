//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University(){}
University::University(const string name)
{
    this->name=name;
}
University::University(const string name, const Professor* professor, const Administrative* admin)
{
    this->name=name;
    this->professor=professor;
    this->admin=admin;

}
string University::getName()
{
    return this->name;

}
void University::setName(const string name)
{
    this->name=name;

}
Professor* University::getProfessor()
{
    return this-> professor;

}
void University::setProfessor(Professor* professor)
{
    this->professor=professor;

}
Administrative* University::getAdministrative()
{
    return this->admin;

}
void University::setAdministrative(Administrative* admin)
{
    this->admin=admin;

}
void University::addProfessor(Professor* professor)
{


}
void University::getListProfessor()
{

}
void University::addAdmin(Administrative* admin)
{

}
void University::getListAdministrative()
{

}

