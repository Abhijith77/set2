#include <iostream.h>
int main()
{
    int n, r = 0, remainder, o;
    cout<<"enter the integer";
    cin>>n;
    o = n; 
    while( n!=0 )
    {
        remainder = n%10;
        r = r*10 + remainder;
        n /= 10;
    }
    if (o == r)
    cout<<"the number is palindrome";
    else
      cout<<"the number is not a palindrome.";
    return 0;
}
