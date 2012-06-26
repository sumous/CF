#include <iostream>
#include <cstdlib>
#define LEN 2000000+5
using namespace std;
char res[LEN];
int a1, a2, a3, a4, len = 0;
bool flag = true;

void load()
{
    cin>>a1>>a2>>a3>>a4;
}
bool is_exist()
{

    if ( (a3>a1) || (a3>a2) || (a4>a1) || (a4>a2) || abs(a3-a4)>1 )
        return false;
    else return true;
}
void solve()
{
    flag = is_exist();
    if (!flag) return;
}
bool case1()
{
    a1 -= a3+1, a2 -= a3+1;
    if (a1<0 || a2<0) return false;
    cout<<"7";
    for (int i = 0; i < a1; i++) cout<<"4";
    for (int i = 0; i < a3; i++) cout<<"47";
    for (int i = 0; i < a2; i++) cout<<"7";
    cout<<"4"<<endl;
    return true;
}
bool case2(int b1, int b2, int b3, int b4)
{
    b1 -= b3+1, b2 -= b3;
    if (b1<0 || b2<0) return false;
    for (int i = 0; i < b1; i++) cout<<"4";
    for (int i = 0; i < b3; i++) cout<<"47";
    for (int i = 0; i < b2; i++) cout<<"7";
    cout<<"4"<<endl;
    return true;
}
bool case3(int b1, int b2, int b3, int b4)
{
    b1 -= b3, b2 -= b3+1;
    if (b1<0 || b2<0) return false;
    cout<<"7";
    for (int i = 0; i < b1; i++) cout<<"4";
    for (int i = 0; i < b3; i++) cout<<"47";
    for (int i = 0; i < b2; i++) cout<<"7";
    return true;
}
bool case4()
{
    a1 -= a3, a2 -= a3;
    if (a1<0 || a2<0) return false;
    for (int i = 0; i < a1; i++) cout<<"4";
    for (int i = 0; i < a3; i++) cout<<"47";
    for (int i = 0; i < a2; i++) cout<<"7";
    cout<<endl;
    return true;
}

void out()
{
    if (!flag) cout<<"-1"<<endl;
    else
    {
        if (a3 < a4)
        {
            flag = case1();
        }
        else if (a3 == a4)
        {
            flag = case2(a1,a2,a3,a4);
            if (!flag) flag = case3(a1,a2,a3,a4);
        }
        else
        {
            flag = case4();
        }
        if (!flag) cout<<"-1"<<endl;
    }

}
int main()
{
    load();
    solve();
    out();
    return 0;
}
