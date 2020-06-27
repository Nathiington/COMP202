#include<iostream>
using namespace std;

int main()
{
int num,rem;
cout<< "Input a number\n";
cin>> num ;
rem = num%2;
if (rem == 0)
{
    cout<<"Number is even";
}
else
{
    cout<<"Number is odd";
}
return 0;
}

