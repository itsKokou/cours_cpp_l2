#include "employe.h"
#include "permanent.h"
#include <iostream>
#include <string>

using namespace std;

Permanent::Permanent(){
    cout<<"Entrez le salaire brut :"<<endl;
    cin>>brut;
    cout<<"Entrez les retenues :"<<endl;
    cin>>retenue;
    cin.get();
}

void Permanent::afficher(){
    Employe::afficher();
    cout<<"Salaire brut : "<<brut<<endl;
    cout<<"Retenues     : "<<retenue<<endl;
}

double Permanent::salaire(){
    return (brut-retenue);
}
