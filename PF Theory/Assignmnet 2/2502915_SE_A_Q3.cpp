#include <iostream>
using namespace std;

int main() {
    float hardness, carbon;
    int tensile;

    cout << "Enter hardness of steel like 50: ";
    cin >> hardness;
    cout << "Enter carbon content of steel like 0.7: ";
    cin >> carbon;
    cout << "Enter tensile strength of steel like 5600: ";
    cin >> tensile;

    bool cond1 = hardness > 50;
    bool cond2 = carbon < 0.7;
    bool cond3 = tensile > 5600;

    if (cond1 && cond2 && cond3) {
        cout << "Grade: 10" << endl;
    }
    else if (cond1 && cond2) {
        cout << "Grade: 9" << endl;
    }
    else if (cond2 && cond3) {
        cout << "Grade: 8" << endl;
    }
    else if (cond1 && cond3) {
        cout << "Grade: 7" << endl;
    }
    else if (cond1 || cond2 || cond3) {
        cout << "Grade: 6" << endl;
    }
    else {
        cout << "Grade: 5" << endl;
    }

    return 0;
}
