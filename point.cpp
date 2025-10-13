#include"point.hpp"
#include<iostream>
using namespace std;
int main()
{
    point A,B,M;double d;
    cout << "SAISIE DU POINT A :" << endl;
    cin >> A;
    cout << "SAISIE DU POINT B :" << endl;
    cin >> B;
    d = A.distance(B);
    M = A.milieu(B);
    cout << "DISTANCE ENTRE A ET B :" << d << endl;
    cout << "MILIEU ENTRE A ET B :" << M << endl;
    return 0;
}