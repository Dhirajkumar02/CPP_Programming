#include <iostream>
#include <climits> //for INT MAX
using namespace std;
int main(){
    int size = 5;
    int nums[size];
    
    int smallest = INT_MAX;
    //Input from user
    for (int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }

    for (int i = 0; i < size; i++)
    {
        // if (nums[i] < smallest)
        // {
        //     smallest = nums[i];
        // }

        //Using predefined function
        smallest = min(nums[i], smallest);
    }
    cout<<smallest;
    return 0;
    
}