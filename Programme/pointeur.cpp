

/**

1/d�claration variable statique

type nom_variable_statique;

ou

type nom_variable_statique=valeur;


2/ Soit v une variable statique quelconque,

l'expression &v repr�sente l'adresse de v en

m�moire

int x;

printf("valeur de x?\n");

scanf("%d",&x);



3/ d�claration d'un pointeur

 type * nom_variable_pointeur;



4/ pas d'adresse � la d�claration d'un pointeur



5/ Un pointeur doit �tre initialis� ,poss�der une

adresse m�moire propre pour un acc�s de la cellule

en lecture ou �criture



6/ Initialision d'un pointeur

 6-1/ Initialisation via l'adresse

  d'une variable statique

   type x=valeur; // x-statique

   type * k; // k - pointeur non initialis�



   k=x; //incorrecte



   k=&x; // correct k recoit l'adresse de x



   on peut acc�der � la valeur de x soit par

   x lui m�me ou par le ponteur k via

   l'expression *k



   6-2/ Demande d'allocation m�moire �

   l'OS via le pointeur avec new

   nom-pointeur = new type;

   * en abscence d'espace m�moire le pointeur

     a la valeur NULL

   * s'il y a espace,le pointeur recoit l'adressse de

   cet espace et on peut alors y stocker une valeur





   7/ Demande d'allocation pour n valeurs

   donc un tableau dynamique

   nom_pointeur= new type[n];

*/

#include <iostream>
using namespace std;

int main()

{

   cout<<"cas 6-1 du commentaire"<<endl;

   int x=16;

   int *k;

   k=&x;

   cout<<"valeur de x methode 1 "<<x<<endl;

   cout<<"valeur de x methode 2 "<<*k<<endl;

   cout<<"adresse de x methode 1 "<<&x<<endl;

   cout<<"adresse de x methode 2 "<<k<<endl;



   int * q;

   cout<<"cas 6-2 du commentaire"<<endl;

   q=new int;

   do{

       q=new int;

       if (q==NULL)

           cout<<"pas d'espace memoire memoire"<<endl;

       else{

           cout<<"adresse de l'espace rserve:"<<q<<endl;

           cout<<"Donnez un entier a y stocker"<<endl;

           cin>>*q;

           cout<<"Votre entier:"<<*q<<endl;

       }

   }while(q==NULL);

   cout<<"demande d'allocation pour un tableau dynamique"<<endl;


   int * tableau;

   int taille;



   cout<<"Donnez la taille du tableau"<<endl;

   cin>>taille;





   do{

      tableau = new int[taille];

      if(tableau==NULL)

           cout<<"pas d'espace m�moire m�moire"<<endl;

   }while(tableau==NULL);

   cout <<"Saisie du tableau"<<endl;

   for (int i=0;i<taille;i++){

       cout<<"Donnez l'element en position "<<(i+1)<<endl;

       cin >>tableau[i];

   }



   cout <<"methode 1: Affichage du tableau et des adresses des elements"<<endl;

   for (int i=0;i<taille;i++){

       cout<<"valeur:"<<tableau[i]<<" adresse:"<<&tableau[i]<<endl;
   }

    cout <<"methode 2: Affichage du tableau et des adresses des elements"<<endl;

   for (int i=0;i<taille;i++){

       cout<<"valeur:"<<*(tableau+i)<<" adresse:"<<(tableau+i)<<endl;
   }

   return 0;
}



/* Objets statiques

point p1;

point p2(5,6)

p1.getx()

p1.gety()

objets dynamiques

int * p = new int; // allocation un entier

point * p1= new point // allocation pour un objet point

point * p2 = new point(5,6);

p1->getx()

p1->gety()

p2->getx()

*/



