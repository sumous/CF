#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int n, k, a[101], times[101], index;
bool max_index()
{
    int max = 0;
    bool flag = false;
    for(int i = 0;i < n;i ++)
        if(a[i]>max && times[i]<3 && a[i]>=k)
        {
            flag = true;
            max = a[i], index = i;
        }

    return flag;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    memset(times, 0 ,sizeof(times));
    cin>>n>>k;
    for(int i = 0;i < n;i ++) cin>>a[i];
    while(max_index())
    {
        times[index]++;
        a[index] -= k;
    }
    int sum = 0;
    for(int i = 0 ;i < n;i ++) sum += a[i];
    cout<<sum<<endl;
    return 0;
}
