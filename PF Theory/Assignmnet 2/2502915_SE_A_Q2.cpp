#include <iostream>
using namespace std;

int main() {
    int month, day;

    cout << "Enter month (1-12): ";
    cin >> month;
    if (month < 1 || month > 12) {
        cout << "Invalid month entered!" << endl;
        return 0;
    }
    cout << "Enter day (1-31): ";
    cin >> day;

    if ((month == 12 && day >= 16) || (month == 1) || (month == 2) || (month == 3 && day <= 15)) {
        cout << "Season: Winter" << endl;
    }
    else if ((month == 3 && day >= 16) || (month == 4) || (month == 5) || (month == 6 && day <= 15)) {
        cout << "Season: Spring" << endl;
    }
    else if ((month == 6 && day >= 16) || (month == 7) || (month == 8) || (month == 9 && day <= 15)) {
        cout << "Season: Summer" << endl;
    }
    else if ((month == 9 && day >= 16) || (month == 10) || (month == 11) || (month == 12 && day <= 15)) {
        cout << "Season: Fall" << endl;
    }
    else {
        cout << "Invalid date entered!" << endl;
    }

    return 0;
}

