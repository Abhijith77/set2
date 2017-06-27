#include <iostream.h>
int main()
{
    int l, h, i, f;
    cout << "Enter the range: ";
    cin >> l >> h;

    cout << "Prime numbers between " << l << " and " << h << " are: ";

    while (l < h)
    {
        f= 0;

        for(i = 2; i <= l/2; ++i)
        {
            if(l % i == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
            cout << l<< " ";

        ++l;
    }

    return 0;
}
