
#include <string>
#include <iostream>
#include "personne.h"
#include "etudiant.h"
#include <vector>

using namespace std;

int main()
{
    Personne *p =new Personne;
    cout<<"Nom : "<<p->getNom()<<endl;
    cout<<"Prenom : "<<p->getPrenom()<<endl;

    Etudiant *et = new Etudiant;
    cout<<"Matricule : "<<et->getMatricule()<<endl;
    cout<<"Nom : "<<et->getNom()<<endl;
    cout<<"Prenom : "<<et->getPrenom()<<endl;
    cout<<"Classe : "<<et->getClasse()<<endl;

    return 0;
}

