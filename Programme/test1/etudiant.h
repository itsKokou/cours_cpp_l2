#ifndef ETUDIANT_H
#define ETUDIANT_H
#include<iostream>
#include<string>

using namespace std;

class Etudiant{
private :
    string numero;
    string nom;
    string prenom;
    double *notes;
    int *coef;
    int nbreNotes;

public:
    Etudiant();

    void affiche();

};


#endif // ETUDIANT_H

