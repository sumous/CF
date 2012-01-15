#include<iostream>
#include<string.h>
using namespace std;
long f[101][101][2];
int main()
{
    memset(f, 0, sizeof(f) );
    f[0][0][0] = f[0][0][1] = 1;
    int n1, n2, k1, k2;
    cin >>n1>>n2>>k1>>k2;
    for(int i = 0;i <= n1;i ++)
        for(int j = 0;j <= n2;j ++)
        {
            for(int k = 0;k<i;k ++)
            {
                if(i-k > k1) continue;
                f[i][j][0] += f[k][j][1];
            }
            f[i][j][0] %= 100000000;

            for(int k = 0;k<j;k ++)
            {
                if(j-k > k2) continue;
                f[i][j][1] += f[i][k][0];
            }
            f[i][j][1] %= 100000000;
        }

    cout<<(f[n1][n2][0]+f[n1][n2][1]) % 100000000<<endl;
    return 0;
}
