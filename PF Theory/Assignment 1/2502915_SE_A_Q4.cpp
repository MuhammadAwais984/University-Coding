#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int i, a, b;
    const int u = 3, p = 4;
    double result;

    cout << "Enter value of i: ";
    cin >> i;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    
    double numerator = sqrt(u * (pow(i, ((double)a / b))) * (pow(i, 2) - 1));
    double denominator = sqrt(p * (i) - 2) + sqrt(p * (i) - 1);

    result = numerator / denominator;

    cout << fixed << setprecision(4);
    cout << "Result = " << result << endl;

    return 0;


}