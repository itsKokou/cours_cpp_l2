#include <iostream>
#include <string>
#include "etudiant.h"
#include<vector>

using namespace std;

main()
{
    vector <Etudiant* > tab;
    int choix;
    do{
        cout<<"1...Ajouter Etudiant"<<endl;
        cout<<"2...Lister les etudiants et leurs moyenne"<<endl;
        cout<<"3...Quitter"<<endl;
        cout<<"Faites votre choix :"<<endl;
        cin>>choix;
        cin.get();
        switch(choix){
        case 1:
            {
                Etudiant *et = new Etudiant;
                tab.push_back(et);
                break;
            }
        case 2:
            {
                for(int i=0; i<tab.size(); i++){
                    cout<<"----------------------------------------------"<<endl;
                    tab[i]->affiche();
                }
                cout<<"----------------------------------------------"<<endl;
                break;
            }
        }
    }while(choix!=3);
    cout<<"Fin du programme"<<endl;


    /*Etudiant et; // constructeur interactif
    t.push_back(et);
    Etudiant et1;
    t.push_back(et1);
    for(int i=0;i<t.size();i++){
        cout<<"--------------------------------"<<endl;
        cout<<t[i].affiche()<<endl;
        cout<<&t[i]<<endl;
    }

    /*Etudiant *et = new Etudiant; // trouver espace memoire

    cout<<et->affiche()<<endl;
    cout<<et<<endl;*/

    /*int *p = new int;
    cout<<"Entre une valeur"<<endl;
    cin>>*p;

    cout<<p<<endl;
    cout<<*p;*/
}
