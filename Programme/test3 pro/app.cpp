#include <string>
#include <iostream>
#include "personne.h"
#include "etudiant.h"
#include <vector>

using namespace std;

int main()
{
    vector <Personne *> tab;
    int choix;
    Etudiant *et;
    string nom,prenom,matricule,classe;

    do{
        cout<<"1.......Ajouter Personne"<<endl;
        cout<<"2.......Ajouter Etudiant"<<endl;
        cout<<"3.......Lister Personnes"<<endl;
        cout<<"4.......Lister Etudiants"<<endl;
        cout<<"5.......Quitter"<<endl;
        cin>>choix;
        cin.get();

        switch(choix){
        case 1:
            {
                string nomClasse = "Personne";
                cout<<"Entrez le nom : "<<endl;
                getline(cin,nom);
                cout<<"Entrez le prenom : "<<endl;
                getline(cin,prenom);
                Personne *p = new Personne(nomClasse,nom,prenom);
                tab.push_back(p);
                break;
            }
        case 2:
            {
                string nomClasse = "Etudiant";
                cout<<"Entrez le Matricule : "<<endl;
                getline(cin,matricule);
                cout<<"Entrez le nom : "<<endl;
                getline(cin,nom);
                cout<<"Entrez le prenom : "<<endl;
                getline(cin,prenom);
                cout<<"Entrez la classe : "<<endl;
                getline(cin,classe);
                et = new Etudiant(nomClasse,nom,prenom,matricule,classe);
                tab.push_back(et);
                break;
            }
        case 3:
            {
                for(int i=0; i<tab.size();i++){
                    if(tab[i]->getNomClasse().compare("Personne")==0){
                        cout<<"----------------------------------------"<<endl;
                        tab[i]->affiche();
                    }
                }
                cout<<"----------------------------------------"<<endl;
                break;
            }
        case 4:
            {
                for(int i=0; i<tab.size();i++){
                    if(tab[i]->getNomClasse().compare("Etudiant")==0){
                        cout<<"----------------------------------------"<<endl;
                        tab[i]->affiche();
                    }
                }
                cout<<"----------------------------------------"<<endl;
                break;
            }
        case 5:
            break;
        default:
            cout<<"choix indisponible"<<endl;
            break;
        }
    }while(choix!=5);
    cout<<"Fin Programme"<<endl;
}

