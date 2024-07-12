#include <string>
#include <iostream>
#include "personne.h"
#include "etudiant.h"

using namespace std;

Etudiant::Etudiant(string anom, string aprenom, string mat,string cl):Personne(anom,aprenom){
    matricule = mat;
    classe = cl;
}

string Etudiant::getMatricule(){
    return matricule;
}

string Etudiant::getClasse(){
    return classe;
}

