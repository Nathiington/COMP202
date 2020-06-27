#include <iostream>
//using namespace std;

template <typename T>
void swap(T &x ,T &y)
{
  T temp;
  temp = x;
  x = y;
  y = temp;
}
int main()
{
  int a,b;
  std::cout << "Enter value for a: " << '\n';
  std::cin >> a;
  std::cout << "Enter value for b: " << '\n';
  std::cin >> b;

  swap (a , b);
  std::cout << "a is: " << a << '\n';
  std::cout << "b is: " << b;
  return 0;
}


