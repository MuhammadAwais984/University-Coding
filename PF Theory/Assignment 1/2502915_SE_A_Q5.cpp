#include <iostream>

using namespace std;

int main() {
    double hourly_wage;
    double hours_worked;
    double withholding_tax_percentage;    
    double gross_pay;
    double tax_amount;
    double net_pay;
    cout << "Enter hourly wage: ";
    cin >> hourly_wage;

    cout << "Enter number of hours: ";
    cin >> hours_worked;

    cout << "Enter withholding tax (percentage, e.g., 25): ";
    cin >> withholding_tax_percentage;

    gross_pay = hourly_wage * hours_worked;
    
    double tax_rate_decimal = withholding_tax_percentage / 100.0;
    tax_amount = gross_pay * tax_rate_decimal;

    net_pay = gross_pay - tax_amount;
    cout << "Net Pay: " << net_pay << endl;
    
    return 0;
}
