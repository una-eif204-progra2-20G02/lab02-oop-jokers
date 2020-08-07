//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University {
  private:
  string name;
  Professor* professor;
  Administrative* admin;
  vector<Professor*> ProfessorList;
  vector<Administrative*> AdministrativeList;

  public:
  University();
  University(const string name);
  University(const string name, const Professor* professor, const Administrative* admin);
  string getName();
  void setName(const string name);
  Professor* getProfessor();
  void setProfessor(Professor*);



};


#endif //LAB02_OOP_UNIVERSITY_H
