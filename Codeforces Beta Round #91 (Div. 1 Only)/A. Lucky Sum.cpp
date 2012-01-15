#include <iostream>
using namespace std;
const int dic[] = {0,4, 7};
int lucky(int a)
{
    if(a==0) return 4;
    int n = 0, i = 1;
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
    int n;
    cin>>n;
    bool flag = false;
    for(int i = 0;i <= n;i ++)
    {
        int luc = lucky(i);
        if(luc == 0) continue;
        //if(luc > n) break;
        if(n%luc == 0){flag = true; break;}
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
