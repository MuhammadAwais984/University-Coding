#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    if (gender == 'M' || gender == 'm') {
        if (age < 50) {
            cout << "Your voting center is out of town." << endl;
        } else {
            cout << "You can cast your vote in your own city." << endl;
        }
        cout << "Your age is: " << age << endl;
    }
    else if (gender == 'F' || gender == 'f') {
        char transport;
        cout << "Do you have personal transport? (Y/N): ";
        cin >> transport;

        if (transport == 'Y' || transport == 'y') {
            cout << "Your voting center is out of town." << endl;
        } else {
            cout << "You can cast your vote in your own city." << endl;
        }
        cout << "Your age is: " << age << endl;
    }
    else {
        cout << "Invalid gender input. Please enter M or F." << endl;
    }

    return 0;
}
