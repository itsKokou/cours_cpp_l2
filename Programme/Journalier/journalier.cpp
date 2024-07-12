#include "journalier.h"
#include <iostream>
#include <string>

using namespace std;


journalier::journalier(){

   cout<<"Code?"<<endl;
   getline(cin,matr);

   cout<<"Nom?"<<endl;
   getline(cin,nom);

   cout<<"Prenom?"<<endl;
   getline(cin,prenom);

   cout<<"Nombre d'heures?"<<endl;
   cin>>nh;

   cout<<"Taux horaire?"<<endl;
   cin>>th;
}

void journalier::afficher(){

   cout<<"Code Journalier:"<<matr<<endl;
   cout<<"Nom:"<<nom<<endl;
   cout<<"Prenom:"<<prenom<<endl;
   cout<<"Nombre d'heures:"<<nh<<endl;
   cout<<"Taux horaire:"<<th<<endl;

}



void journalier::salaire(){

   cout<<"Salaire:"<<(nh*th)<<endl;
}
