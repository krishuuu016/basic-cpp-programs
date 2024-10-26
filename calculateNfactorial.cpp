#include <iostream>
using namespace std;

int findFactorial() {
    int num;
    cout << "enter your number : ";
    cin >> num;

    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    
    cout << "factorial of " << num << " is : " ;
    return fact;
}

int main () {
    int fact = findFactorial();
    cout << fact;
}