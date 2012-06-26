#include <iostream>
using namespace std;
long a, b;
const int lucky[] = {0,0,0,0,1,0,0,1,0,0};

void load()
{
    cin>>a>>b;
    a++;
}
long find_lucky(long t)
{
    int d = 1;
    long res = 0;
    while(t)
    {
        int tmp = t%10;
        if (lucky[tmp])
        {
            res += tmp*d;
            d *= 10;
        }
        t /= 10;
    }
    return res;
}
void solve()
{
    while( find_lucky(a) != b) a++;
}
void out()
{
    cout<<a<<endl;
}
int main()
{
    load();
    solve();
    out();
    return 0;
}
