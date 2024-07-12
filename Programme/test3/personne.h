#ifndef PERSONNE_H
#define PERSONNE_H
#include<string>
#include<iostream>

using namespace std;

class Personne{
    private:
        string nom;
        string prenom;
        string nomClasse;
    public:
        Personne(string anom, string aprenom);
        string getNom();
        string getPrenom();
        string getNomClasse();
        void setNomClasse(string an);

};

#endif // PERSONNE_H

