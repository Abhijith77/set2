#include <iostream.h>
int main()
{
  int n1, n2, i, n, d, s;
  cout << "Enter first number: ";
  cin >> n1;
  cout << "Enter second number: ";
  cin >> n2;
  cout << "Armstrong numbers between " << n1 << " and " << n2 << " are: " << endl;
  for(i = n1; i <= n2; i++)
  {
        s = 0;
        n = i;

        for(; num > 0; num /= 10)
        {
            d = n % 10;
            s = s + d * d * d;
        }

        if(s == i)
        {
            cout << i << endl;
        }
  }

  return 0;
}
