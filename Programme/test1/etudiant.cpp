#include<iostream>
#include<string>
#include "etudiant.h"

using namespace std;

Etudiant::Etudiant(){
    cout<<"Entrez le numero"<<endl;
    getline(cin,numero);
    cout<<"Entrez le nom de l'etudiant"<<endl;
    getline(cin,nom);
    cout<<"Entrez le prenom de l'etudiant"<<endl;
    getline(cin,prenom);
    cout<<"Entrez le nombre de note"<<endl;
    cin>>nbreNotes;
    cin.get();
    notes = new double[nbreNotes];
    coef = new int[nbreNotes];

    for(int i=0; i<nbreNotes; i++){
        cout<<"Entrez la note numero "<<(i+1)<<" :"<<endl;
        cin>>notes[i];
        cout<<"Entrez le coefficient numero "<<(i+1)<<" :"<<endl;
        cin>>coef[i];
    }
    cin.get();
}


void Etudiant::affiche(){
    cout<<"Numero de l'etudiant : "<<numero<<endl;
    cout<<"Nom de l'etudiant : "<<nom<<endl;
    cout<<"Prenom de l'etudiant : "<<prenom<<endl;
    cout<<"Numero\tNotes\tCoefficient"<<endl;

    double som = 0;
    int somC = 0;
    for(int i=0; i<nbreNotes; i++){
        cout<<(i+1)<<"\t"<<notes[i]<<"\t"<<coef[i]<<endl;
        som= som+ notes[i]*coef[i];
        somC =somC+ coef[i];
    }
    double moy= som / somC;
    cout<<"LA MOYENNE EST :           "<<moy<<endl;
}
