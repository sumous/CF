#include <iostream>
#include <stdio.h>
using namespace std;
const int dic[] = {0,4, 7};
long long lucky(long long a)
{
    if(a==0) return 4;
    long long n = 0, i = 1;
    while(a)
    {
        if(a%3 == 0) return 0;
        n += dic[a%3]*i;
        i *= 10;
        a /= 3;
    }
    return n;
}
int main()
{
    long long l, r;
    long long sum = 0;
    cin>>l>>r;
    long long s = 1, e;
    long long sluc, eluc;
    while(1)
    {
        long long luc = lucky(s);
        if(luc >= l) {sum += (luc-l+1)*luc;eluc = sluc = luc;break;}
        s++;
    }
    e = s+1;
    while(eluc<r)
    {
        long long luc = lucky(e);
        if(luc != 0)
        {
            sluc = eluc;
            eluc = luc;
            if(eluc<r)
                sum += (eluc - sluc)*eluc;
        }
        e++;
    }
    sum += eluc*(r - sluc);
    cout<<sum<<endl;
    return 0;
}
