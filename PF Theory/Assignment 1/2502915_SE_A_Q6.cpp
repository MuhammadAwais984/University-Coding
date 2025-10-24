#include <iostream>
using namespace std;

int main() {
    int amount;
    int count_500, count_100, count_50, count_20, count_10, count_5, count_1;

    cout << "Enter the amount in Rupees: ";
    cin >> amount;

    int remaining_amount = amount;
    
    cout << "\nCurrency Note : Number" << endl;

    count_500 = remaining_amount / 500;
    remaining_amount = remaining_amount % 500;
    cout << "500 : " << count_500 << endl;

    count_100 = remaining_amount / 100;
    remaining_amount = remaining_amount % 100;
    cout << "100 : " << count_100 << endl;
    
    count_50 = remaining_amount / 50;
    remaining_amount = remaining_amount % 50;
    cout << "50 : " << count_50 << endl;

    count_20 = remaining_amount / 20;
    remaining_amount = remaining_amount % 20;
    cout << "20 : " << count_20 << endl;

    count_10 = remaining_amount / 10;
    remaining_amount = remaining_amount % 10;
    cout << "10 : " << count_10 << endl;

    count_5 = remaining_amount / 5;
    remaining_amount = remaining_amount % 5;
    cout << "5 : " << count_5 << endl;

    count_1 = remaining_amount; 
    cout << "1 : " << count_1 << endl;

    return 0;
}