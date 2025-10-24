#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "-------------------Welcome to AUCT Bank-----------------------" << endl;
    cout << "1. My Account" << "\n"
         << "2. Funds Transfer" << "\n"
         << "3. Load Mobile Bundles" << endl;

    const string name = "Muhammad Awais";
    const int balance = 25000;

    const string beneficiary_name1 = "Mateen";
    const string beneficiary_name2 = "Muneeb";
    const string beneficiary_name3 = "Akif";

    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nName: " << name << endl;
        cout << "Balance: " << balance << endl;
        break;

    case 2:
    {
        string enteredName;
        char bankChoice;

        cout << "\nEnter Beneficiary Full Correct Name: ";
        cin >> enteredName;

        cout << "Select Bank of Beneficiary:\n";
        cout << " a. Alfalah Bank\n";
        cout << " b. Bank of Punjab\n";
        cout << " f. Fast Bank\n";
        cout << "Enter choice (a/b/f): ";
        cin >> bankChoice;

        bool valid = false;

        if (balance < 5000)
        {
            cout << "Low Balance" << endl;
        }
        else
        {
            if (enteredName == beneficiary_name1 && (bankChoice == 'a' || bankChoice == 'b'))
                valid = true;

            else if (enteredName == beneficiary_name2 && (bankChoice == 'a' || bankChoice == 'b' || bankChoice == 'f'))
                valid = true;

            else if (enteredName == beneficiary_name3 && bankChoice == 'b')
                valid = true;

            if (valid)
            {
                int amount;
                cout << "Enter Amount to Transfer: ";
                cin >> amount;

                if (amount <= balance)
                    cout << "Amount Transferred Successfully!" << endl;
                else
                    cout << "Insufficient Balance!" << endl;

                cout << "Balance after Transfer: " << balance - amount << endl;
            }
            else
            {
                cout << "Beneficiary has no Account!" << endl;
            }
        }

        break;
    }

    case 3:
    {
        cout << "u.Ufone\nt.Telenor" << endl;
        char mobilechoice;
        cout << "Enter your choice (u or t): ";
        cin >> mobilechoice;
        if (mobilechoice == 'u')
        {
            cout << "1.Super Card Plus\n2.Super card Gold" << endl;
            int cardchoice;
            cout << "Enter your choice (1 or 2) : ";
            cin >> cardchoice;
            if (cardchoice == 1)
            {
                cout << "Super Card Plus Loaded Successfully!" << "\n"
                     << "Your balance is : " << balance - 699 << endl;
            }
            else if (cardchoice == 2)
            {
                cout << "Super Card Gold Loaded Successfully!" << "\n"
                     << "Your balance is : " << balance - 1099 << endl;
            }
            else
            {
                cout << "Invalid Choice!" << endl;
            }
        }
        else if (mobilechoice == 't')
        {
            cout << "1.Monthly easy Card" << "\n"
                 << "2.Weely Easy Card" << endl;
            int cardchoice;
            cout << "Enter choice (1 or 2) : ";
            cin >> cardchoice;
            if (cardchoice == 1)
            {
                cout << "Monthly Easy Card Loaded Successfully" << "\n"
                     << "Your balance is : " << balance - 700 << endl;
            }
            else if (cardchoice == 2)
            {
                cout << "Weely Easy Card Loaded Successfully" << "\n"
                     << "Your balance is : " << balance - 300 << endl;
            }
            else
            {
                cout << "Invalid Choice!" << endl;
            }
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }
        break;
    }

    default:
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}
