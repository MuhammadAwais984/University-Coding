#include <iostream>
using namespace std;

int main() {
    float battingAvg, bowlingAvg, strikeRate;

    cout << "Enter batting average: ";
    cin >> battingAvg;

    cout << "Enter bowling average: ";
    cin >> bowlingAvg;

    cout << "Enter batting strike rate: ";
    cin >> strikeRate;

    if (battingAvg < 0 || bowlingAvg < 0 || strikeRate <= 0) {
        cout << "Invalid Input" << endl;
        return 0; 
    }

    if (battingAvg >= 45 && bowlingAvg >= 60) {
        cout << "Player is a Batsman." << endl;

        if (battingAvg >= 50 && strikeRate <= 70)
            cout << "He should play in Test matches." << endl;
        else
            cout << "He should play in ODIs." << endl;
    }

    else if (battingAvg >= 40 && bowlingAvg <= 30) {
        cout << "Player is an All-rounder." << endl;

        if (battingAvg >= 40 && bowlingAvg <= 25)
            cout << "He should play in Test matches." << endl;
        else
            cout << "He should play in ODIs." << endl;
    }

    else {
        cout << "Player should be part of the Reserves." << endl;
    }

    return 0;
}
