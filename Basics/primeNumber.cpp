#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 2;

    cout << "Enter a Number: ";
    cin >> n;

    if(n <= 1)
    {
        cout << "Not Prime Number";
        return 0;
    }

    while(i <= n-1)
    {
        if(n % i == 0)
        {
            cout << "Not Prime Number";
            return 0;
        }
        i++;
    }

    cout << "Prime Number";

    return 0;
}