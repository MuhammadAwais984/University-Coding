#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(5) << "***"  << setw(7) << "*   *" << setw(7) << "***"  << setw(6) << "***" << setw(8) << "*****" << endl;
    cout << setw(6) << "*  *" << setw(7) << "*   *" << setw(7) << "*  *" << setw(6) << " * " << setw(8) << "*    " << endl;
    cout << setw(6) << "****" << setw(7) << "* * *" << setw(7) << "****" << setw(6) << " * " << setw(8) << "**** " << endl;
    cout << setw(6) << "*  *" << setw(7) << "* * *" << setw(7) << "*  *" << setw(6) << " * " << setw(8) << "    *" << endl;
    cout << setw(6) << "*  *" << setw(7) << "*   *" << setw(7) << "*  *" << setw(6) << "***" << setw(8) << "**** " << endl;
    return 0;
}