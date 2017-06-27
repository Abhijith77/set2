#include<iostream.h>
#include<conio.h>
void main()
{
    int num,m,n;
    clrscr();
    cout<<"enter the range";
    cin>>m>>n;
    cout<<"Print even Numbers in a given range"<<m<<"to" <<n<<":\n";
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 0)
                  cout<<num;
         }
                getch();
}
