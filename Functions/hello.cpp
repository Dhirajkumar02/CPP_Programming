#include <iostream>
using namespace std;

//function definition
void printHello(){
    cout<<"Hello\n";
}
int sum(int a, int b){
    return a+b;
}
int main(){
    //function call /invoke
    printHello();
    printHello();
    printHello();
    cout<<"Sum = "<<sum(10, 5);
    return 0;
}