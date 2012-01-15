#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct P
{
    int v, n;
    bool d;
}diff[10001];
int n, k;
char res[10][10001], old[10001];
int  cur_i;
bool cmp(P a, P b)
{
    if(a.v != b.v)
        return a.v < b.v;
    if(a.d ^ b.d)
        return a.d > b.d;
    if(a.d & b.d)
        return a.n < b.n;
    return a.n > b.n;
}
int find_min(int i)
{
    cur_i = i;
    int money = 0;
    for(int j = 0;j < n;j ++)
    {
        diff[j].v = abs(old[j] - '0' - i);
        diff[j].n = j;
        diff[j].d = old[j]>'0'+i ? 1 : 0;
    }
    sort(diff, diff+n, cmp);
    for(int j = 0;j < k;j ++)
    {
        res[i][diff[j].n] = i+'0';
        money += diff[j].v;
    }
    for(int j = 0;j < n;j ++)
        if(!res[i][j]) res[i][j] = old[j];
    return money;
}
int main()
{
//freopen("a.txt", "r", stdin);
    memset(res, 0, sizeof(res));
    cin>>n>>k;
    cin>>old;
    int M = 90001, bea;
    char tmp[10001];
    for(int i = 0;i < 10;i ++)
    {
        int money = find_min(i);
        if(money < M)
        {
            M = money;
            bea = i;
            strcpy(tmp, res[i]);
        }
        else if(money == M)
            if( strcmp(tmp, res[i])>0 )
            {
                strcpy(tmp, res[i]);
                bea = i;
            }
    }

    cout<<M<<endl<<res[bea]<<endl;
    return 0;
}
