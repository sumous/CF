#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a[1001], n, k;
    cin>>n>>k;
    k--;
    for(int i = 0;i < n;i ++) cin>>a[i];
    while(!a[k]) k = (k+1)%n;
    cout<<k+1<<endl;
    return 0;
}
