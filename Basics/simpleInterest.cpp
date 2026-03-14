#include <iostream>
using namespace std;

int main(){
    double p, r, t;

    cout << "Enter principal amount: ";
    cin >> p;

    cout << "Enter rate of interest: ";
    cin >> r;

    cout << "Enter time: ";
    cin >> t;

    double si = (p * r * t) / 100;

    cout << "Simple Interest: " << si;

    return 0;
}