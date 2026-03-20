#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    bool prime[n+1];

    // Initialize all as true
    for(int i = 0; i <= n; i++)
        prime[i] = true;

    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= n; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }

    cout << "Prime numbers:\n";

    for(int i = 2; i <= n; i++)
    {
        if(prime[i])
            cout << i << " ";
    }

    return 0;
}