#include<iostream>
using namespace std;

int x = 12;
int main()
{
    int z,x,f;
    cout << "Enter a number:\n";
    cin >> x ;
    z = ::x + 5;            // Scope resolution operator takes from the global variable therefore means z = 12 + 5
    cout << z;
    f = x + 5;              // No scope resolution means local variable
    cout <<"\n";
    cout << f;
return 0;
}
