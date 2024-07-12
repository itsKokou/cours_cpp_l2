#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class point
{
private:
 double x;
 double y;
public:
 double getx();
 double gety();
 void setx(double ax);
 void sety(double ay);
};
#endif // POINT_H
