#include <iostream>
using namespace std;

int sumOfDigit() {
    int num;
    cout << "enter your number : ";
    cin >> num;

    int digitsum = 0;

    while (num > 0)
    {
        int lastdigit = num % 10;
        num = num / 10;
        digitsum = digitsum + lastdigit;
        
    }

    cout << "sum of digit of " << num << " is : ";
    return digitsum;
    

}

int main () {
    cout << sumOfDigit();
}