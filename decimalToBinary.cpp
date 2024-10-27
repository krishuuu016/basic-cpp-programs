#include <iostream>
using namespace std;

int DeciToBinary() {
    cout<<"please enter your number" << endl;
    int num;
    cin >> num;

    int ans = 0;
    int power = 1;


    while (num > 0)
    {
        int reminder = num%2;
        num = num / 2;
        ans = ans + reminder * power;
        power = power * 10;
    }
    
    return ans;
}

int main () {
    cout<<DeciToBinary();
}