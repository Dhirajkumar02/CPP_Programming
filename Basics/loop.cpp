#include <iostream>
using namespace std;

int main() 
{
  int i;
  for(i=1; i<=10; i++){
    cout << i <<endl;
  }
  cout<<i<<endl; // 11; Because i is declared outside the loop. So, it is still accessible after the loop.
  return 0;
    
}