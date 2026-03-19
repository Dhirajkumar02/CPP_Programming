#include <iostream>
using namespace std;

int factorialOfN(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *=i;
    }
    return fact;
}

int main(){
    cout<<factorialOfN(5);
    return 0;
}
