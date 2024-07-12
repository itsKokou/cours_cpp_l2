#ifndef JOURNALIER_H
#define JOURNALIER_H
#include "employe.h"
#include <iostream>
#include <string>

using namespace std;

class Journalier:public Employe{
private:
    int horaires;
    double taux;
public:
    Journalier();
    void afficher();
    double salaire();
};

#endif // JOURNALIER_H
