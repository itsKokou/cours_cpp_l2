#include "employe.h"
#include "journalier.h"
#include <iostream>
#include <string>

using namespace std;

Journalier::Journalier(){
    cout<<"Entrez le nombre d'heures :"<<endl;
    cin>>horaires;
    cout<<"Entrez le taux horaire :"<<endl;
    cin>>taux;
    cin.get();
}

void Journalier::afficher(){
    Employe::afficher();
    cout<<"Total horaire : "<<horaires<<endl;
    cout<<"Taux horaire  : "<<taux<<endl;
}

double Journalier::salaire(){
    return (horaires*taux);
}
