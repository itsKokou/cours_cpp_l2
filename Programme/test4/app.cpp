#include <iostream>
#include <string>
#include <vector>
#include "employe.h"
#include "permanent.h"
#include "journalier.h"

using namespace std;

int main()
{
    vector <Employe *> tab;
    Journalier *j;
    Permanent *p;
    int choix;

    do{
        cout<<"1........Ajouter Permannent"<<endl;
        cout<<"2........Ajouter Journalier"<<endl;
        cout<<"3........Lister les employes"<<endl;
        cout<<"4........Quitter"<<endl;
        cout<<"Faites votre choix :"<<endl;
        cin>>choix;
        cin.get();

        switch(choix){
        case 1:
            {
                p = new Permanent;
                tab.push_back(p);
            }
            break;
        case 2:
            {
                j = new Journalier;
                tab.push_back(j);
            }
            break;
        case 3:
            {
                for(int i=0; i<tab.size();i++){
                    cout<<"------------------------------------"<<endl;
                    tab[i]->afficher();
                    cout<<"Salaire      : "<<tab[i]->salaire()<<endl;
                }
                 cout<<"------------------------------------"<<endl;
            }
            break;
            case 4:
                break;
            default:
                cout<<"Choix invalide !"<<endl;
                break;
        }
    }while(choix!=4);
    cout<<"Fin de programme..."<<endl;
    return 0;
}
