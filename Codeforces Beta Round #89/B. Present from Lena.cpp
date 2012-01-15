#include<iostream>
using namespace std;
int n;
void print_space(int n)
{
    for(int i = 0;i < n*2;i ++) cout<<' ';
}
void print_num(int i)
{
    print_space(n-i);
    cout<<'0';
    for(int j = 1;j <= i;j ++) cout<<' '<<j;
    for(int j = i-1;j >= 0;j --) cout<<' '<<j;
    cout<<endl;
}
int main()
{

    cin>>n;
    for(int i = 0;i <= n;i ++)
    {
        print_num(i);
    }
    for(int i = n-1;i >= 0;i --)
    {
        print_num(i);
    }
    return 0;
}
