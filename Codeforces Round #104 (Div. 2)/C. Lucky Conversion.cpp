#include <iostream>
#include <cstring>
#include <stdio.h>
#define LEN 100000+5
using namespace std;
char s1[LEN], s2[LEN];
int res = 0, cas[2] = {0}, len = 0;

void load()
{
    gets(s1);
    gets(s2);
    len = strlen(s1);
}
void solve()
{
    for (int i = 0; i < 100000; i++)
    {
        if (s1[i] == '4' && s2[i] == '7') cas[0] ++;
        if (s1[i] == '7' && s2[i] == '4') cas[1] ++;
    }

    res = max(cas[0], cas[1]);
}
void out()
{
    cout<<res<<endl;
}
int main()
{
    load();
    solve();
    out();
    return 0;
}
