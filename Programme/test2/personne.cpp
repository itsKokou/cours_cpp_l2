#include<string>
#include<iostream>
#include "personne.h"

using namespace std;

Personne::Personne(){
    cout<<"Entrez le nom"<<endl;
    getline(cin,nom);
    cout<<"Entrez le prenom"<<endl;
    getline(cin,prenom);
}

string Personne::getNom(){
    return nom;
}

string Personne::getPrenom(){
    return prenom;
}


