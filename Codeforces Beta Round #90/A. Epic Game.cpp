#include <iostream>
using namespace std;
int a, b, n;
int gcd(int a1, int a2)
{
    if(a1 < a2)
    {
        int tmp = a1;
        a1 = a2,a1 = tmp;
    }
    if(a2 == 0) return a1;
    else return gcd(a2, a1%a2);
}
int main()
{
    cin >>a>>b>>n;
    int loser = 1;
    while(n)
    {
        int div;
        if(loser)
        {
            div = gcd(a, n);
            loser = 0;
        }
        else
        {
            div = gcd(b, n);
            loser = 1;
        }
            n -= div;
    }
    cout<<loser<<endl;
    return 0;
}
