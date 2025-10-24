#include <iostream>
using namespace std;

int main() {
    unsigned short time_entry;
    cout << "Enter a two-byte Time Value: ";
    cin >> time_entry;

    unsigned int hours   = (time_entry >> 12) & 0x0F;  
    unsigned int minutes = (time_entry >> 6)  & 0x3F;  
    unsigned int seconds =  time_entry         & 0x3F; 
    cout << "Time is " << hours << " hrs " 
         << minutes << " mins " 
         << seconds << " secs" << endl;

    return 0;
}
