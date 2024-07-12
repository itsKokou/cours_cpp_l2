#include <string>
#include <iostream>
#include "personne.h"
#include "etudiant.h"

using namespace std;

Etudiant::Etudiant(){
    cout<<"Entrez le matricule"<<endl;
    getline(cin,matricule);
    cout<<"Entrez la classe "<<endl;
    getline(cin,classe);
}

string Etudiant::getMatricule(){
    return matricule;
}

string Etudiant::getClasse(){
    return classe;
}

