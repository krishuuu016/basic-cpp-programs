#include <iostream>
using namespace std;

int Factorial(int num) {
    
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    
    
    return fact;
}

int main () {
    cout << "enter value of n : ";
    int n;
    cin >> n;
    cout << "enter value of r : ";
    int r;
    cin >> r;

    int fact_n = Factorial(n);
    int fact_r = Factorial(r);
    int fact_nmr = Factorial(n-r);

    int nCr = fact_n / (fact_r * fact_nmr);

    cout << "value of nCr is : " << nCr ;
    
}