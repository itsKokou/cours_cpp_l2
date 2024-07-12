#include "employe.h"
#include <iostream>
#include <string>

using namespace std;

Employe::Employe(){
    cout<<"Entrez le matricule :"<<endl;
    getline(cin,matricule);
    cout<<"Entrez le nom :"<<endl;
    getline(cin,nom);
    cout<<"Entrez le prenom :"<<endl;
    getline(cin,prenom);
}

string Employe::getMatricule(){
    return matricule;
}

string Employe::getNom(){
    return nom;
}

string Employe::getPrenom(){
    return prenom;
}

void Employe::afficher(){
    cout<<"Matricule : "<<matricule<<endl;
    cout<<"Nom       : "<<nom<<endl;
    cout<<"Prenom    : "<<prenom<<endl;
}
