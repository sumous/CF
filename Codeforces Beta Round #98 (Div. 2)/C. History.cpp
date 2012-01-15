#include <iostream>
#include <stdio.h>
#include <algorithm>
#define LEN 100000
using namespace std;
struct node
{
    int a,  b;

}p[LEN];

bool cmp(node a, node b)
{
    if(a.a < b.a) return true;
    else if(a.a == b.a)
    {
        return (a.b > b.b);
    }
    else return false;
}

int main(void)
{
  //  freopen("data.txt", "r", stdin);
    int n, cnt = 0, max_b=0;
    cin>>n;
    for(int i = 0;i < n;i++) cin>>p[i].a>>p[i].b;

    sort(p, p+n, cmp);
    for(int i = 0;i < n;i++)
    {
        if(p[i].b < max_b) cnt++;
        else max_b = p[i].b;
    }
    cout<<cnt<<endl;
    return 0;
}
