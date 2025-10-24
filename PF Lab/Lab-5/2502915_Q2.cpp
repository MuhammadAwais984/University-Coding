#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter x and y coordinates: ";
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        cout << "The point (" << a << "," << b << ") is in  1st quadrant" << endl;
    }
    else if (a < 0 && b > 0)
    {
        cout << "The point (" << a << "," << b << ") is in  2nd quadrant" << endl;
    }
    else if (a < 0 && b < 0)
    {
        cout << "The point (" << a << "," << b << ") is in  3rd quadrant" << endl;
    }
    else
    {
        cout << "The point (" << a << "," << b << ") is in  4th quadrant" << endl;
    }
}