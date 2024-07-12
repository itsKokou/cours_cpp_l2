
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
    Etudiant(string anomClasse,string anom, string aprenom, string mat,string cl);
    void affiche();

};

#endif // ETUDIANT_H
