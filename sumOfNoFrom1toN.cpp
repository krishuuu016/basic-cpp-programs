#include <iostream>
using namespace std;

int sumOfNumbers() {
    cout << "enter your number :" << endl;
    int num;
    cin >> num;

    int sum = 0;

    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "sum of number from 1 to " << num << " is : ";
    return sum;
    
}

int main() {
    cout << sumOfNumbers();
}