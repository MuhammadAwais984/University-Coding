#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an uppercase alphabet: ";
    cin >> ch;

    char lower = ch + 32;  

    cout << "Lowercase alphabet: " << lower << endl;

    return 0;
}
