#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int choice;

    cout << "If you want to find the largest number between 3 numbers. Enter 3 : \n";
    cout << "If you want to find the largest number between 4 numbers. Enter 4 : \n";
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 3)
    {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;

        int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

        cout << "The largest number is: " << largest << endl;
    }
    else if (choice == 4)
    {
        cout << "Enter four numbers: ";
        cin >> a >> b >> c >> d;

        int largest = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d))
                              : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));

        cout << "The largest number is: " << largest << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
