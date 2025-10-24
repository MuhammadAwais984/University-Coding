#include <iostream>
using namespace std;

int main()
{
    int number,originalInput;

    cout << "Enter an integer : ";
    cin >> number;

    originalInput = number;

    number = number << 1;
    cout << "1. Doubled : " << number << endl;

    number = number + 10;
    cout << "2. Added 10 : " << number << endl;

    number = number >> 1;
    cout << "3. Halved : " << number << endl;

    number = number - originalInput;
    cout << "4. Subtracted  " << originalInput << ": " << number << endl;

    cout << "FINAL NUMBER: " << number << endl;

    return 0;
}
