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
        Personne(string anomClasse,string anom, string aprenom);
        string getNomClasse();
        virtual void affiche();

};

#endif // PERSONNE_H


