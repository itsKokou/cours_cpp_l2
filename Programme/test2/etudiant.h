
#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
#include <iostream>
#include "personne.h"

using namespace std;

class Etudiant: public Personne{
private :
    string matricule;
    string classe;
public:
    Etudiant();
    string getMatricule();
    string getClasse();

};

#endif // ETUDIANT_H
