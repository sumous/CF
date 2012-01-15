#include <iostream>
using namespace std;
bool p[5001] = {false};
int main(void)
{
    int n;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        int a;
        cin>>a;
        p[a] = true;
    }

    int cnt = 0;
    for(int i = 1;i <= n;i++)
        if(!p[i]) cnt++;
    cout<<cnt<<endl;
    return 0;
}
