#include <iostream>
using namespace std;

  int a,b;
  float x,y;

  int add(int num1,int num2)
  {
    return(num1+num2) ;
  }
  float add(float num1,float num2)
  {
    return(num1+num2);
  }
  int main()
{
cout << "Enter 2 integer numbers" << '\n';
cin >> a >> b;
cout << "int answer is: " << add(a,b) <<'\n';

cout<< "Enter 2 float numbers"<< '\n';
cin >> x >> y;
cout<< "float answer is: " << add(x,y);

  return 0;
}
