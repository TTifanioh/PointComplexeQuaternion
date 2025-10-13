#ifndef COMPLEXE_H
#define COMPLEXE_H
#include<iostream>
#include<cmath>
using namespace std;
class complexe
{
    friend ostream & operator << (ostream & out , const complexe &a);
    friend istream & operator >> (istream & in , complexe &a);
    public :
        void setR(double re);
        void setI(double im);
        double getR();
        double getI();
        complexe addition(complexe &a);
        complexe soustraction(complexe &a);
        complexe multiplication(complexe &a);
        complexe division(complexe &a);
        double module();
    private:
        double re,im;
};
void complexe::setR(double re)
{
    this->re = re;
}
void complexe::setI(double im)
{
    this->im = im;
}
double complexe::getR()
{
    return re;
}
double complexe::getI()
{
    return im;
}
complexe complexe::addition(complexe &a)
{
    complexe b;
    b.re = re + a.re;
    b.im = im + a.im;
    return b;
}
complexe complexe::soustraction(complexe &a)
{
    complexe b;
    b.re = re - a.re;
    b.im = im - a.im;
    return b;
}
complexe complexe::multiplication(complexe &a)
{
    complexe b;
    b.re = re*a.re - im*a.im;
    b.im = re*a.im + a.re*im;
    return b;
}
complexe complexe::division(complexe &a)
{
    complexe b;
    b.re = (re*a.re +im*a.im)/(a.re*a.re + a.im*a.im);
    b.im = (a.re*im - re*a.im)/(a.re* a.re + a.im*a.im);
    return b;
}
double complexe::module()
{
    return sqrt(pow(re,2)+pow(im,2));
}
ostream & operator << (ostream & out ,const complexe &a)
{
    out << "\tPartie réel du complexe :" << a.re << endl;
    out << "\tPartie imaginaire du complexe :" << a.im << endl;
    if (a.im == 0)
        {
            out << "COMPLEXE : " << a.re << endl;
        }
    else if (a.re == 0)
        {
            out << "COMPLEXE : " << a.im << "i" << endl;
        }
    else if (a.re == 0 && a.im == 0)
        {
            out << "COMPLEXE : " << 0 << endl;
        }
    else
        { 
            if (a.im > 0)
            {
                out << "COMPLEXE : " << a.re << " + " << a.im  << "i" << endl;
            }
            else if (a.im < 0)
            {
                out << "COMPLEXE : " << a.re << " " << a.im << "i" << endl;   
            }
        }
    return out;
}
istream & operator >>(istream & in, complexe &a)
{
    cout << "Tapez la partie  réel du complexe : " ;  in >> a.re;
    cout << "Tapez la partie imaginaire du complexe : " ; in >> a.im;
    return in;
}
#endif
