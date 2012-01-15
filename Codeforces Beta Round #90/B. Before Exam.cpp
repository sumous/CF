#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
 //   freopen("data.txt", "r", stdin);
    int  q, n, k, bn = 0, thes, appn = 0;
    float a[101], b[101], min = 101.0, max = 0.0;
    bool is_app[101];
    memset(is_app, false, sizeof(is_app));
    cin >>n>>k;
    thes = n/k;
    for(int i = 1;i <= n;i ++) cin >>a[i];
    cin >> q;
    for(int i = 1;i <= q;i ++)
    {
        float sum = 0;
        for(int j = 0;j < thes;j ++)
        {
            int tmp;
            cin >>tmp;
            sum += a[tmp];
            if(!is_app[tmp]) appn++;
            is_app[tmp] = true;
        }
        sum /= thes;
        if(sum < min) min = sum;
        if(sum > max) max = sum;
    }
    appn /= thes;

    if(appn<k)
    {
        for(int i = 1;i <= n;i ++)
        {
            if(!is_app[i]) b[bn++] = a[i];
        }
        sort(b, b+bn);
        float sum = 0.0;
        for(int i = 0;i < thes;i ++) sum += b[i];
        if(sum/thes < min) min = sum/thes;

        sum = 0.0;
        for(int i = bn-thes;i < bn;i ++) sum += b[i];
        if(sum/thes > max) max = sum/thes;
    }
   // cout<<setprecision(10) ;
    printf("%.10f %.10f\n", min, max);
  //  cout<<appn;

    return 0;
}
