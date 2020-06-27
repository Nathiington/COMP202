#include<iostream>
using namespace std;

int main()
{
    int num,rem,numnum,sum ;
    sum = 0;
    cout<< "Input number";
    cin >> num;
    numnum= num;
    while (num>0)
    {
     rem = num%10 ;
     sum = sum +(rem*rem*rem);
     num= num/10;
    }
    if(sum==numnum)
    {
        cout << "Armstrong Number";
    }
    else
        {
        cout<<"Not Armstrong Number";
    }
    return 0;

}
