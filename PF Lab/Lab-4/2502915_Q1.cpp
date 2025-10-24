#include <iostream>
using namespace std;

int main() {

    const int gold = 5; 
    
    int userInput;
    int goldenNumber;

    cout << "Enter an integer : ";
    cin >> userInput;

    goldenNumber = userInput | gold;
    cout << "Golden Number: " << goldenNumber <<endl;
    return 0;
}
