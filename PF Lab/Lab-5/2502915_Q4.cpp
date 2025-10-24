#include <iostream>
using namespace std;
int main()
{
   int scores;
   cout << "Enter your score out of 100:";
   cin >> scores;
   if (scores >= 90)
   {
      cout << "A";
   }
   else if (scores >= 85 && scores < 90)
   {
      cout << "A-";
   }
   else if (scores >= 80)
   {
      cout << "B+";
   }
   else if (scores >= 75)
   {
      cout << "B";
   }
   else if (scores >= 70)
   {
      cout << "B-";
   }
   else if (scores >= 65)
   {
      cout << "C+";
   }
   else if (scores >= 60)
   {
      cout << "C";
   }
   else if (scores >= 55)
   {
      cout << "C-";
   }
   else if (scores >= 50)
   {
      cout << "D";
   }
   else
   {
      cout << "F";
   }
}