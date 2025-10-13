#include"complexe.hpp"
#include<iostream>
using namespace std;
int main()
{
    complexe A,B,S,D,M,Q;double d;
    cout << "SAISIR LE COMPLEXE A : " << endl;cin >> A;
    cout << "SAISIR LE COMPLEXE B : " << endl;cin >> B;
    S = A.addition(B);
    D = A.soustraction(B);
    M = A.multiplication(B);
    Q = A.division(B);
    cout << "ADDITION DE 2 NB COPMLEXE : " << endl << S << endl;
    cout << "SOUSTRACTION DE 2 NB COMPLEXE : "  << endl << D << endl;
    cout << "MULTIPLICATION DE 2 NB COMPLEXE : " << endl << M << endl;
    cout << "DIVISION DE 2 NB COMPLEXE : " << endl << Q << endl;
    double a = A.module();
    double b = B.module();
    cout << "MODULE DU PREMIER COMPLEXE ENTRE :" << a << endl;
    cout << "MODULE DU SECOND COMPLEXE ENTRE :" << b << endl;
    return 0;
}