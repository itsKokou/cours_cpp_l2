#include<string>
#include<iostream>
#include "personne.h"

using namespace std;

Personne::Personne(string anom, string aprenom){
    nom=anom;
    prenom= aprenom;
}

string Personne::getNom(){
    return nom;
}

string Personne::getPrenom(){
    return prenom;
}

string Personne::getNomClasse(){
    return nomClasse;
}

void Personne::setNomClasse(string an){
    nomClasse=an;
}

