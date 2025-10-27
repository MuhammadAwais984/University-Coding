#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    string color1, color2;

    cout << "Enter first number (1-36): ";
    cin >> num1;
    cout << "Enter second number (1-36): ";
    cin >> num2;

    // Input Validation
    if (num1 < 1 || num1 > 36 || num2 < 1 || num2 > 36)
    {
        cout << "Invalid input! Numbers must be between 1 and 36." << endl;
        return 0;
    }

    switch (num1)
    {
    case 1:
    case 6:
    case 7:
    case 12:
    case 17:
    case 20:
    case 28:
    case 33:
        color1 = "Green";
        break;
    case 2:
    case 11:
    case 13:
    case 18:
    case 19:
    case 24:
    case 29:
    case 32:
        color1 = "Red";
        break;
    case 3:
    case 10:
    case 14:
    case 23:
    case 25:
    case 30:
    case 31:
    case 36:
        color1 = "Sky Blue";
        break;
    case 4:
    case 9:
    case 15:
    case 22:
    case 26:
    case 35:
        color1 = "Orange";
        break;
    case 5:
    case 8:
    case 16:
    case 21:
    case 27:
    case 34:
        color1 = "Gray";
        break;
    default:
        color1 = "Unknown";
        break;
    }

    // Determine color of second number
    switch (num2)
    {
    case 1:
    case 6:
    case 7:
    case 12:
    case 17:
    case 20:
    case 28:
    case 33:
        color2 = "Green";
        break;
    case 2:
    case 11:
    case 13:
    case 18:
    case 19:
    case 24:
    case 29:
    case 32:
        color2 = "Red";
        break;
    case 3:
    case 10:
    case 14:
    case 23:
    case 25:
    case 30:
    case 31:
    case 36:
        color2 = "Sky Blue";
        break;
    case 4:
    case 9:
    case 15:
    case 22:
    case 26:
    case 35:
        color2 = "Orange";
        break;
    case 5:
    case 8:
    case 16:
    case 21:
    case 27:
    case 34:
        color2 = "Gray";
        break;
    default:
        color2 = "Unknown";
        break;
    }

    cout << "\nNumber " << num1 << " color: " << color1 << endl;
    cout << "Number " << num2 << " color: " << color2 << endl;

    if (color1 == color2)
        cout << "Both numbers have the SAME color." << endl;
    else
        cout << "Numbers have DIFFERENT colors." << endl;

    return 0;
}
