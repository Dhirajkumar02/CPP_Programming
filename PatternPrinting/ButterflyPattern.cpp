#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter number: ";
    cin>>n;

    //Top outer loop
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++) 
        {
              
            // To print spaces
            if (j > i && j <= 2 * n - i) {
                cout<<" ";
            }
            
            // To print stars
            else {
                cout<<"*";
            }
        }
        cout<<endl;           
    }

    //Bottom
    // Outer loop to handle the lower part
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= 2 * n; j++) {
              
                // To print spaces
                if (j > i && j <= 2 * n - i) {
                    cout<<" ";
                }
                
                // To print stars
                else {
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    
    
    return 0;
}