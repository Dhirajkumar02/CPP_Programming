#include <iostream>
using namespace std;
int main(){
    int n;
    int count = 1;
    int sum = 0;
    cout<<"Enter a Number: ";
    cin >>n;

    while(count <= n)
    {
        sum += count;
        count++;      
    }
    cout<<"Sum of "<<n<<" number: "<<sum;

    return 0;
}