#include <string>
#include <iostream>
#include "personne.h"
#include "etudiant.h"

using namespace std;

Etudiant::Etudiant(string anomClasse,string anom, string aprenom, string mat,string cl):Personne(anomClasse,anom,aprenom){
    matricule = mat;
    classe = cl;
}

void Etudiant::affiche(){
    cout<<"Matricule  : "<<matricule<<endl;
    Personne::affiche();
    cout<<"Classe     : "<<classe<<endl;
}

