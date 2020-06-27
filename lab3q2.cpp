#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,c;
    //int *z;
    cout << "Size of Array: \n";
    cin >> a; //sets how many times the program runs

    int *z = new int[a]; //declaration & implementation of new pointer

    for(b=0;b<=(a-1);b++)
    {
        cout << "Enter number:\n";
        cin >> z[b]; // new number(and memory) is stored(allocated) in z array
    }
    for(b=0;b<=(a-1);b++) //(loop to output all the numbers)
    cout << z[b]<< ",";

 delete[] z; //number(and memory) is deleted
//memory is cleared and program is finished 

}
