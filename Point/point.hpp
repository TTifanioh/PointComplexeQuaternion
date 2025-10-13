#ifndef POINT_H
#define POINT_H
#include<iostream>
#include<cmath>
using namespace std;
class point
{
    friend ostream & operator<<(ostream & out, const point &A);
    friend istream & operator>>(istream & in, point &A);
    public:
        void setX(double x);
        void setY(double y);
        double getX();
        double getY();
        double distance(const point &A);
        point milieu(const point &A);
    
    private:
        double x,y;      
};
void point::setX(double x)
{
    this->x=x;
}
void point::setY(double y)
{
    this->y=y;
}
double point::getX()
{
    return x;
}
double point::getY()
{
    return y;
}
ostream & operator<<(ostream & out , const point &A)
{
    out << "\tAbscisse du point :" << A.x << endl;
    out << "\tOrdonnée du point :" << A.y << endl;
    return out;
}
istream & operator>>(istream & in, point &A)
{
    cout << "\tTapez l'abscisse :" ; in >> A.x;
    cout << "\tTapez l'ordonnée :"; in >> A.y;
    return in;
}
double point::distance(const point &A)
{
    double dx,dy;
    dx = x + A.x;
    dy = y + A.y;
    return sqrt(dx*dx + dy*dy);    
}
point point::milieu(const point &A)
{
    point M;
    M.x= (x+A.x)/2;
    M.y= (y+A.y)/2;
    return M;
}
#endif
