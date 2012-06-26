#include <iostream>
using namespace std;
int n;
int dig[51];
const int lucky[] = {0,0,0,0,1,0,0,1,0,0};
void load()
{
    cin>>n;
    char ch;

    for (int i = 0; i < n; i++)
    {
        cin>>ch;
        dig[i] = ch - '0';

    }
}
bool is_lucky()
{
    int i;
    for (i = 0 ; i < n; i++)
        if (!lucky[ dig[i] ]) return false;

    int l = 0, r = 0;
    i = 0;
    for (i = 0 ; i < n/2; i++) l += dig[i];
    for (; i < n; i++) r += dig[i];
    if (l == r) return true;
    else return false;
}

void out()
{
    if (is_lucky()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    load();
    out();
    return 0;
}
