
#ifndef JOURNALIER_H
#define JOURNALIER_H
#include <iostream>
#include <string>

using namespace std;

class journalier {

    private:

        string matr;
        string nom;
        string prenom;
        int nh;
        int th;

    public:
        journalier();
        void afficher();
        void salaire();
};

#endif // JOURNALIER_H
