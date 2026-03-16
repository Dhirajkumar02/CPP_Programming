#include <iostream>
using namespace std;
int main(){
    int n;
    int evenSum = 0;
    int i =1;
    cout<<"Enter number: ";
    cin>>n;
    while(i <= n){
        if(i%2 == 0){
            evenSum += i; 
        }
        i++;
    }
    cout<<evenSum<<endl;
    return 0;
}