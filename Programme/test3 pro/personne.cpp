
#include<string>
#include<iostream>
#include "personne.h"

using namespace std;

Personne::Personne(string anomClasse, string anom, string aprenom){
    nomClasse = anomClasse;
    nom=anom;
    prenom= aprenom;
}

string Personne::getNomClasse(){
    return  nomClasse;
}

void Personne::affiche(){
    cout<<"Nom        : "<<nom<<endl;
    cout<<"Prenom     : "<<prenom<<endl;
}

