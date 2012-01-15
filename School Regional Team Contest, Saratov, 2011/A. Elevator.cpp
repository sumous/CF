#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char s[7];
    int a;
    scanf("%s\n%d", s, &a);
    if(s[0] == 'f')
    {
        if(a==1) putchar('L');
        else putchar('R');
    }
    else
    {
        if(a==1) putchar('R');
        else putchar('L');
    }
    putchar('\n');
    return 0;
}
