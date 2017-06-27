#include <iostream.h>
int main()
{
    unsigned int n;
    unsigned long long f = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i = 1; i <=n; ++i)
    {
        f *= i;
    }

    cout << "Factorial of " << n << " = " << f;    
    return 0;
}
