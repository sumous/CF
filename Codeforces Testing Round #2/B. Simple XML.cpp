#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char ch;
    int h = 0;
    while((ch = getchar()) && ch!='\n')
    {
        char next;
        next = getchar();
        if(next == '/') h--;
        for(int j = 0;j < 2*h;j ++) cout<<" ";
        putchar(ch);
        putchar(next);
        while((ch=getchar()) && ch!='>') putchar(ch);
        putchar(ch);putchar('\n');
        if(next != '/') h++;
    }
    return 0;
}
