#include <iostream>
#include <climits>

using namespace std;

int main() {

    int arr[] = {1,3,7,5,6,8,-24,-15};

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < 8; i++)
    {
        if(arr[i] < smallest) {
            smallest = arr[i];
        } 
        
    }

    int x = smallest;

    for (int i = 0; i < 8; i++)
    {
        if(arr[i] > largest) {
            largest = arr[i];
        } 
        
    }

    int y = largest;


    for (int i = 0; i < 8; i++) {
        if(x == arr[i]) {
            cout << "smallest element found at index " << i << endl;
        }
    }

    cout << "also smallest number is " << smallest << endl;

    for (int i = 0; i < 8; i++) {
        if(y == arr[i]) {
            cout << "largest element found at index " << i << endl;
        }
    }

    cout << "also largest number is " << largest << endl;
    

    return 0;
}