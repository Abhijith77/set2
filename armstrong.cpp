#include <iostream.h>
int main()
{
  int o, n, r, s = 0,d;
  cout << "Enter a positive  integer: ";
  cin >> o;

  n= o;

  while(n!= 0)
  {
      d = n % 10;
      s += d* d * d;
      n /= 10;
  }

  if(s == o)
    cout << o << " is an Armstrong number.";
  else
    cout << o << " is not an Armstrong number.";

  return 0;
}
