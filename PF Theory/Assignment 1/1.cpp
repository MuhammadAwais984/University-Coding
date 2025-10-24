#include <iostream>
using namespace std;

int main() {
    const int hourlyRate = 100; 
    int hoursWorked;
    double pay;

    cout << "Enter number of hours worked: ";
    cin >> hoursWorked;

    if (hoursWorked <= 40) {
      
        pay = hourlyRate * hoursWorked;
    } else {
        int overtimeHours = hoursWorked - 40;
        pay = (40 * hourlyRate) + (overtimeHours * hourlyRate * 2);
    }

    cout << "Total pay: Rs. " << pay << endl;

    return 0;
}
