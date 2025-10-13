#include"quaternions_algebra.hpp"
#include<iostream>
using namespace std;
int main()
{
    quaternion A,B,S,D,M;
    cout << "SAISIE DU QUATERNION A : " << endl;cin >> A;
    cout << "SAISIE DU QUATERNION B : " << endl;cin >> B;
    S = A.addition(B);
    D = A.soustraction(B);
    M = A.multiplication(B);
    cout << "L'ADDITION ENTRE 2 QUATERNION :" << endl << S << endl;
    cout << "LA SOUSTRACTION ENTRE 2 QUATERNION :" << endl << D <<endl;
    cout << "LA MULTIPLICATION ENTRE 2 QUATERNION :" << endl << M << endl;
    double a = A.module();
    double b = B.module();
    cout << "MODULE DU PREMIER QUATERNION A : " << a << endl;
    cout << "MODULE DU SECOND QUATERNION B : " << b << endl;
    return 0;
}
    
