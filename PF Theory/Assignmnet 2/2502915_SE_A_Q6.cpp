#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

int main()
{
    srand(time(0)); // seed for random numbers

    int matchChoice, enclosureChoice;
    char familyOption;
    int adults = 0, children = 0;
    string cnic;

    // Ticket Prices
    int vip, premium, firstClass, general;

    cout << "===============================" << endl;
    cout << "   PSL 2026 - Pindi Stadium" << endl;
    cout << "===============================" << endl;
    cout << "1. 27 Feb 2026 - Islamabad United v Quetta Gladiators (Night) (7pm-10.15pm)\n";
    cout << "2. 28 Feb 2026 - Peshawar Zalmi v Lahore Qalandars (Night) (8pm-11.15pm)\n";
    cout << "3. 29 Feb 2026 - Islamabad United v Peshawar Zalmi (Night) (7pm-10.15pm)\n";
    cout << "4. 1 Mar 2026 - Islamabad United v Karachi Kings (Night) (7pm-10.15pm)\n";
    cout << "5. 2 Mar 2026 - Peshawar Zalmi v Karachi Kings (Night)(7pm-10.15pm)\n";
    cout << "6. 5 Mar 2026 - Peshawar Zalmi v Quetta Gladiators (Night) (7pm-10.15pm)\n";
    cout << "7. 7 Mar 2026 - Peshawar Zalmi v Islamabad United (Day) (2pm-5.15pm)\n";
    cout << "8. 8 Mar 2026 - Multan Sultans v Islamabad United (Day) (2pm-5.15pm)\n";
    cout << "=================================" << endl;
    cout << "Enter your choice (1-8): ";
    cin >> matchChoice;

    // Input validation
    if (matchChoice < 1 || matchChoice > 8)
    {
        cout << "Invalid match selection!" << endl;
        return 0;
    }

    // Ticket price setup
    switch (matchChoice)
    {
    case 1:
    case 2:
    case 3:
        vip = 3000;
        premium = 1500;
        firstClass = 1000;
        general = 500;
        break;
    case 4:
        vip = 2000;
        premium = 1000;
        firstClass = 500;
        general = 250;
        break;
    case 5:
    case 6:
        vip = 1500;
        premium = 1000;
        firstClass = 500;
        general = 250;
        break;
    case 7:
        vip = 2000;
        premium = 1000;
        firstClass = 500;
        general = 250;
        break;
    case 8:
        vip = 1500;
        premium = 1000;
        firstClass = 500;
        general = 250;
        break;
    }

    cout << "\nAvailable Enclosures:\n";
    cout << "1. Imran Khan (VIP, Max 1000 seats, Price Rs." << vip << ")\n";
    cout << "2. Javed Miandad (VIP, Max 1000 seats, Price Rs." << vip << ")\n";
    cout << "3. Javed Akhter (VIP, Max 1000 seats, Price Rs." << vip << ")\n";
    cout << "4. Azhar Mehmood (VIP, Max 1000 seats, Price Rs." << vip << ")\n";
    cout << "5. Sohail Tanveer (First Class, Max 3000 seats, Price Rs." << firstClass << ")\n";
    cout << "6. Shoaib Akhtar (Premium, Max 3000 seats, Price Rs." << premium << ")\n";
    cout << "7. Imran Buksh (General, Max 2500 seats, Price Rs." << general << ")\n";
    cout << "8. Yasir Arafat (General, Max 2500 seats, Price Rs." << general << ")\n";

    cout << "\nEnter your enclosure choice (1-8): ";
    cin >> enclosureChoice;

    if (enclosureChoice < 1 || enclosureChoice > 8)
    {
        cout << "Invalid enclosure selection!" << endl;
        return 0;
    }

    int maxSeats;
    switch (enclosureChoice)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        maxSeats = 1000;
        break;
    case 5:
    case 6:
        maxSeats = 3000;
        break;
    case 7:
    case 8:
        maxSeats = 2500;
        break;
    }

    int availableSeats = rand() % maxSeats + 1; // random seat availability
    cout << "Available seats in this enclosure: " << availableSeats << endl;

    cout << "Do you want to buy Family Tickets? (Y/N): ";
    cin >> familyOption;

    double total = 0;

    if (familyOption == 'Y' || familyOption == 'y')
    {
        cout << "Enter number of adult tickets (max 4): ";
        cin >> adults;
        cout << "Enter number of children tickets (max 5): ";
        cin >> children;

        if (adults < 1 || adults > 4 || children < 1 || children > 5)
        {
            cout << "This category is not for Family!" << endl;
            return 0;
        }

        if (adults + children > availableSeats)
        {
            cout << "Not enough seats available!" << endl;
            return 0;
        }

        cout << "Enter CNIC: ";
        cin >> cnic;

        // Get enclosure price
        int price;
        switch (enclosureChoice)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            price = vip;
            break;
        case 6:
            price = premium;
            break;
        case 5:
            price = firstClass;
            break;
        case 7:
        case 8:
            price = general;
            break;
        }

        double adultCost = adults * price * 0.9;   // 10% rebate
        double childCost = children * price * 0.8; // 20% rebate
        total = adultCost + childCost;
    }
    else
    {
        cout << "Enter number of adult tickets (max 8): ";
        cin >> adults;

        if (adults < 1 || adults > 8)
        {
            cout << "Invalid number of tickets!" << endl;
            return 0;
        }

        if (adults > availableSeats)
        {
            cout << "Not enough seats available!" << endl;
            return 0;
        }

        cout << "Enter CNIC: ";
        cin >> cnic;

        int price;
        switch (enclosureChoice)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            price = vip;
            break;
        case 6:
            price = premium;
            break;
        case 5:
            price = firstClass;
            break;
        case 7:
        case 8:
            price = general;
            break;
        }

        if (adults > 4)
            total = adults * price * 0.9; // 10% rebate
        else
            total = adults * price;
    }

    cout << "\n=================================" << endl;
    cout << " CNIC: " << cnic << endl;
    cout << " Total Amount Due: Rs. " << total << endl;
    cout << "=================================" << endl;

    cout << "✅ Tickets booked successfully. Enjoy the match!" << endl;

    return 0;
}
