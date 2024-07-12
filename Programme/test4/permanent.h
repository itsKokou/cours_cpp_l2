#ifndef PERMANENT_H
#define PERMANENT_H
#include "employe.h"
#include <iostream>
#include <string>

using namespace std;

class Permanent:public Employe{
private:
    double brut;
    double retenue;
public:
    Permanent();
    void afficher();
    double salaire();
};

#endif // PERMANENT_H
