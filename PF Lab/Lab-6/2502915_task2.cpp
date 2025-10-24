#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character to check its vowel or not : ";
    cin >> ch;

    {
        switch (ch) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << "It is a vowel." << endl;
                break;
            default:
                cout << "It`s not a vowel." << endl;
        }
    } 

    return 0;
}
