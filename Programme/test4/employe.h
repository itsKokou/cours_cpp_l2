#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>
#include <string>

using namespace std;

class Employe {
private:
    string matricule;
    string nom;
    string prenom;
public:
    Employe();
    string getMatricule();
    string getNom();
    string getPrenom();
    virtual void afficher();// methode virtuelle
    virtual double salaire()=0; // methode abstraite/ virtuelle pure ==> classe abstraite
};


#endif // EMPLOYE_H
