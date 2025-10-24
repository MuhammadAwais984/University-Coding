#include <iostream>
using namespace std;

int main()
{
    float percent;
    int t_class, a_class;
    cout << "Enter total classes :";
    cin >> t_class;
    cout << "Enter attended classes: ";
    cin >> a_class;
    percent = ((float)a_class / (float)t_class) * 100;
    cout << "Your attendance percentage is :" << percent << endl;
    if (percent >= 85)
    {
        cout << "You are allowed to sit in exam ." << endl;
    }
    else
        cout << "You are not allowed to sit in exam ." << endl;
}