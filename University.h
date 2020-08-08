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
  std::string name;
  Professor* professor;
  Administrative* admin;
  std::vector<Professor*> ProfessorList;
  std::vector<Administrative*> AdministrativeList;

  public:
  University();
  University(const std::string& name);
  University(const std::string &name, const Professor* professor, const Administrative* admin);
  std::string getName();
  void setName(const std::string name);
  Professor* getProfessor();
  void setProfessor(Professor* professor);
  Administrative* getAdministrative();
  void setAdministrative(Administrative* admin);
  void addProfessor(Professor* professor);
  void getListProfessor();
  void addAdmin(Administrative* admin);
  void getListAdministrative();



};


#endif //LAB02_OOP_UNIVERSITY_H
