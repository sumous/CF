#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int e[30005], n;
int X[30005], Y[30005], x, y, lx;
void print(int d)
{
    for(int i = 0;i < lx;i ++) cout<<X[i]<<" ";
    cout<<endl;
    cout<<Y[0]<<" ";
    int pre = Y[0];
    for(int i = 1;i < y;)
    {
        if(Y[i]-pre==d)
            cout<<Y[i]<<" ",pre=Y[i],i++;
        else
            cout<<X[lx]<<" ",pre=X[lx],lx++;
    }
}
bool test(int d)
{
    lx = x;
    int pre = Y[y-1];
    for(int k = y-2;k >= 0;)
    {
        if(pre-Y[k]==d)
            pre = Y[k],k--;
        else if(pre-X[lx-1]==d)
            pre=X[lx-1],lx--;
        else return false;
    }
    return true;
}
bool split(int a1, int a2)
{
    y=0;x=0;
    if(a1==1) Y[y++] = e[0];
    X[0] = e[a1];X[1] = e[a2];x += 2;
    int d1 = X[1] - X[0];
    for(int i = a1+1;i < n;i ++)
    {
        if(i == a2) continue;
        if(e[i] - X[x-1] == d1) X[x++] = e[i];
        else Y[y++] = e[i];
    }

    if(y==0)
    {
        for(int i = 1;i < x;i ++) cout<<X[i]<<" ";
        cout<<endl;
        cout<<X[0];
        return true;
    }
    else if(y==1)
    {
        for(int i = 0;i < x;i ++) cout<<X[i]<<" ";
        cout<<endl;
        cout<<Y[0];
        return true;
    }
    else
    {
        if(test(Y[y-1]-Y[y-2]))
        {
            print(Y[y-1]-Y[y-2]);
            return true;
        }
        else if(test(Y[y-1]-X[x-1]))
        {
            print(Y[y-1]-X[x-1]);
            return true;
        }
    }
    return false;
}
int main()
{
  //  freopen("data.txt","r",stdin);
    int x, y, start = 0;
    cin>>n;
    for(int i = 0;i < n;i ++) cin>>e[i];

    if(n == 2)
    {
        cout<<e[0]<<endl;
        cout<<e[1]<<endl;
    }
    else
    {
        if(!split(0, 1))
            if(!split(0, 2))
                if(!split(1, 2))
                    cout<<"No solution"<<endl;
    }
    return 0;
}
