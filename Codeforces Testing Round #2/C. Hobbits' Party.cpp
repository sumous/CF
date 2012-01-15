#include <iostream>
#include <cmath>
using namespace std;
int map[150][150];
int main()
{
    int n;
    cin>>n;
    int k = sqrt(2*n);
    while(k*(k+1) <= 2*n ) k++;
    int start = 1;;

    for(int i = 0;i < k-1;i ++)
        for(int j = 0;j <= i;j ++)  map[j][i] = start++;

    start = 1;
    for(int i = 1;i < k;i ++)
        for(int j = 0;j < i;j ++) map[i][j] = start++;

    cout<<k<<endl;
    for(int i = 0;i < k;i ++)
    {
        cout<<map[i][0];
        for(int j = 1;j < k-1;j ++)
            cout<<" "<<map[i][j];
        cout<<endl;
    }
    return 0;
}
