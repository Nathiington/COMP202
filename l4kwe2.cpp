#include <iostream>
using namespace std;

  template <typename T>
  T pwr(T x)
  {
    return(x*x);
  }

  int main()
{
  int /*anytype btw*/ b;
  cout << "Enter a number" << '\n';
  cin >> b;
  cout << "answer is: " << pwr(b) << '\n';

  return 0;
}
