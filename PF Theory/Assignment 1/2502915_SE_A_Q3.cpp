#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    char W, S;

    cout << "Enter window style character (e.g., #): ";
    cin >> W;
    cout << "Enter stair style character (e.g., /): ";
    cin >> S;
    cout << "\n--- FCAI Building Pattern ---\n\n";

    
    // --------------------------------------------------------------------------------

    cout
        << setw(49) << "_______________________________" << "\n"
        // Top of roof
        // 1st row
        << setw(18) << "|" << setw(32) << "|" << "\n"
        << setw(18) << "|"
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << '/' << '\n'
        // 2nd row
        << setw(18) << "|"
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << '/' << '\n'
        << setw(50) << "|_______________________________|" << "\n"

        // Bottom of the roof
        // 1st row
        << setw(18) << "|" << setw(32) << "|" << "\n"
        << setw(18) << "|"
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << '/' << '\n'
        // 2nd row
        << setw(18) << "|"
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << W << W << W << W
        << setw(4) << '/' << '\n'
        << setw(50) << "|_______________________________|" << "\n";

    // --------------------------------------------------------------------------------
    cout
        << setw(2) << " _______________" << setw(53) << "________________" << "\n"
        << setw(0) << "|"
        << setw(16) << "|" << setw(3) << "_" << setw(6) << "_" << setw(6) << "_" << setw(6) << "_" << setw(6) << "_" << setw(6) << "_" << setw(3) << "|" << setw(17) << "|" << "\n"
        << setw(0) << "|"
        << setw(2) << W << W << W
        << setw(2) << W << W << W
        << setw(2) << W << W << W
        << setw(4) << '/' << setw(1) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(2) << "/" << setw(3) << W << W << W << setw(2) << W << W << W << setw(2) << W << W << W << setw(4) << '/' << '\n'
        // 2nd row
        << setw(0) << "|"
        << setw(2) << W << W << W
        << setw(2) << W << W << W
        << setw(2) << W << W << W
        << setw(4) << '/' << setw(1) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(3) << "/" << setw(2) << "/" << setw(3) << W << W << W << setw(2) << W << W << W << setw(2) << W << W << W << setw(4) << '/' << '\n'
        << setw(0) << "|_______________|" << setw(1) << "|" << setw(1) << "__" << setw(1) << "|" << setw(3) << "|" << setw(1) << "__" << setw(1) << "|" << setw(3) << "|" << setw(1) << "__" << setw(1) << "|" << setw(3) << "|" << setw(1) << "__" << setw(1) << "|" << setw(3) << "|" << setw(1) << "__" << setw(1) << "|" << setw(3) << "|" << setw(1) << "__" << setw(1) << "|" << setw(2) << "|" << "________________" << "|" << "\n";

    // --------------------------------------------------------------------------------
    cout
        << setw(14) << "__________" << setw(31) << "_____________________" << setw(18) << "__________" << "\n"
        << setw(4) << "|"
        << setw(11) << "|" << setw(9) << "|" << setw(22) << "|" << setw(7) << "|" << setw(11) << "|" << "\n"
        << setw(4) << "|"
        << setw(2) << W << W << W
        << setw(2) << W << W << W << setw(3) << '/' << setw(9) << "/" << setw(15) << "Faculty of" << setw(7) << "/" << setw(7) << "/" << setw(2) << W << W << W << setw(2) << W << W << W << setw(3) << "/" << "\n"
        << setw(4) << "|"
        << setw(2) << W << W << W
        << setw(2) << W << W << W << setw(3) << '/' << setw(9) << "/" << setw(18) << "Computing & AI" << setw(4) << "/" << setw(7) << "/" << setw(2) << W << W << W << setw(2) << W << W << W << setw(3) << "/" << "\n"
        << setw(15) << "|__________|" << setw(31) << "|_____________________|" << setw(18) << "|__________|" << "\n";


    // --------------------------------------------------------------------------------

    cout
        << setw(20) << '/' << setw(30) << '\\' << '\n'
        << setw(19) << '/' << setw(32) << '\\' << '\n'
        << setw(18) << '/' << setw(34) << '\\' << '\n'
        << setw(17) << '/' << setw(36) << '\\' << '\n'
        << setw(16) << '/' << setfill(S) << setw(38) << '\\' << setfill(' ') << '\n'
        << setw(15) << '/' << setfill(S) << setw(40) << '\\' << setfill(' ') << '\n'
        << setw(14) << '/' << setfill(S) << setw(42) << '\\' << setfill(' ') << '\n'
        << setw(13) << '/' << setfill(S) << setw(44) << '\\' << setfill(' ') << '\n'
        << setw(12) << '/' << setfill(S) << setw(46) << '\\' << setfill(' ') << '\n'
        << setw(11) << '/' << setfill(S) << setw(48) << '\\' << setfill(' ') << '\n'
        << setw(10) << '/' << setfill(S) << setw(50) << '\\' << setfill(' ') << '\n'
        << setw(9) << '/' << setfill(S) << setw(52) << '\\' << setfill(' ') << '\n'
        << setw(8) << '/' << setfill(S) << setw(54) << '\\' << setfill(' ') << '\n'
        << setw(7) << '/' << setfill(S) << setw(56) << '\\' << setfill(' ') << '\n'
        << setw(6) << '/' << setfill(S) << setw(58) << '\\' << setfill(' ') << '\n'
        << setw(5) << '/' << setfill(S) << setw(60) << '\\' << setfill(' ') << '\n'
        << setw(4) << '/' << setfill(S) << setw(62) << '\\' << setfill(' ') << '\n'
        << setw(3) << '/' << setfill(S) << setw(64) << '\\' << setfill(' ') << '\n'
        << setw(2) << '/' << setfill(S) << setw(66) << '\\' << setfill(' ') << '\n'
        << setw(1) << '/' << setfill(S) << setw(68) << '\\' << setfill(' ') << '\n'; 
    return 0;
}
