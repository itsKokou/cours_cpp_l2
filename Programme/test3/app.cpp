

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
                Personne *p = new Personne(nom,prenom);
                p->setNomClasse("Personne");
                tab.push_back(p);
                break;
            }
        case 2:
            {
                cout<<"Entrez le Matricule : "<<endl;
                getline(cin,matricule);
                cout<<"Entrez le nom : "<<endl;
                getline(cin,nom);
                cout<<"Entrez le prenom : "<<endl;
                getline(cin,prenom);
                cout<<"Entrez la classe : "<<endl;
                getline(cin,classe);
                et = new Etudiant(nom,prenom,matricule,classe);
                et->setNomClasse("Etudiant");
                tab.push_back(et);
                break;
            }
        case 3:
            {
                for(int i=0; i<tab.size();i++){
                    if(tab[i]->getNomClasse().compare("Personne")==0){
                        cout<<"----------------------------------------"<<endl;
                        cout<<"Nom : "<<tab[i]->getNom()<<endl;
                        cout<<"Prenom : "<<tab[i]->getPrenom()<<endl;
                    }
                }
                cout<<"----------------------------------------"<<endl;
                break;
            }
        case 4:
            {
                for(int i=0; i<tab.size();i++){
                    if(tab[i]->getNomClasse().compare("Etudiant")==0){
                        et = (Etudiant *)tab[i];
                        cout<<"----------------------------------------"<<endl;
                        cout<<"Matricule : "<<et->getMatricule()<<endl;
                        cout<<"Nom : "<<et->getNom()<<endl;
                        cout<<"Prenom : "<<et->getPrenom()<<endl;
                        cout<<"Classe : "<<et->getClasse()<<endl;
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


