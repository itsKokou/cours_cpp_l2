#ifndef PERSONNE_H
#define PERSONNE_H
#include<string>
#include<iostream>

using namespace std;

class Personne{
    private:
        string nom;
        string prenom;
    public:
        Personne();
        string getNom();
        string getPrenom();

};

#endif // PERSONNE_H
