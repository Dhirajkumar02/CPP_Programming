#include <iostream>
#include <climits>   // for INT_MIN
using namespace std;

int main(){
    int size = 5;
    int nums[size];

    int largest = INT_MIN;
    int index = 0;

    // Input
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    // Find largest + index
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
            index = i;
        }
    }

    cout << "Largest element: " << largest << endl;
    cout << "Index: " << index << endl;

    return 0;
}