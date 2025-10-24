#include <iostream>
using namespace std;

int main() {
    int input, remainder;
    
    cout << "Enter an integer : ";
    cin >> input;

    int mod = 15;

    remainder = input & mod;

    cout << "The Remainder is : " << remainder << endl;
    return 0;
}