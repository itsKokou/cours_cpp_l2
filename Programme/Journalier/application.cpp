
#include "journalier.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

int choix=0;
vector<journalier> liste;

do
{

    cout<<"1.ajouter un journalier"<<endl;
    cout<<"2.afficher les journaliers"<<endl;
    cout<<"3.Sortie"<<endl;
    cout<<" Votre choix?"<<endl;
    cin>>choix;
    cin.get();

switch(choix)

{

    case 1: {

        journalier j;

        liste.push_back(j);

    }

    break;

    case 2:

    for (int i=0;i<liste.size();i++)

    {

        cout<<"_______________________"<<endl;

        liste[i].afficher();

        liste[i].salaire();

    }

    cout<<"_______________________"<<endl;

    break;

    case 3:

    break;

    default:

        cout <<"choix invalide"<<endl;

    break;

}

}while(choix!=3);

cout <<"Fin du programme "<<endl;

return 0;

}
