#include <iostream>
using namespace std;

int main()
{
    int n, output, remainder_mod_9, divisor = 9;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    int n_minus_1 = n - 1;

    remainder_mod_9 = n_minus_1 - (n_minus_1 / divisor) * divisor;

    output = remainder_mod_9 + 1;
    cout << "Input : " << n << endl;
    cout << "Output: " << output << endl;

    return 0;
}