#include <iostream>

using namespace std ;

main()
{
    /*cout <<"Hello world"<<endl;*/
    /*int id;
    cout <<"Entrez l'id du produit\n";
    cin >> id;
    cout << id;*/

    /** Fonction TRI*/

    int tab[6]={12,17,-1,0,100,-15};
    int i,j,x;

    cout <<"AVANT LE TRI\n" ;
    for (i=0;i<=6;i++){
        cout <<tab[i]<<" ";
    }
    cout<<"\nAPRES LE TRI\n";
    for (i=1; i<=6;i++){
        x = tab[i];
        j = i;
        while (j>0 && tab[j-1]>x){
            tab[j]=tab[j-1];
            j--;
        }
        tab[j]=x;
    }
    for (i=0; i<=6;i++){
        cout <<tab[i]<<" ";
    }
}
