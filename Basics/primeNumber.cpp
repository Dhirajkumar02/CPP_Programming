#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Enter a Number: ";
    cin >> n;

    if(n <= 1)
    {
        cout << "Non Prime Number";
        return 0;
    }

    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << "Prime Number";
    }else{
        cout << "Non Prime Number";
    }

    return 0;
}