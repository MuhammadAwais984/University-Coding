#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // Top half of diamond (including middle)
    cout<<setw(8)<<"*"<<endl;
    cout<<setw(9)<<"***"<<endl;
    cout<<setw(10)<<"*****"<<endl;
    cout<<setw(11)<<"*******"<<endl;
    cout<<setw(12)<<"*********"<<endl;
    cout<<setw(11)<<"*******"<<endl;
    cout<<setw(10)<<"*****"<<endl;
    cout<<setw(9)<<"***"<<endl;
    cout<<setw(8)<<"*"<<endl;

    return 0;
}