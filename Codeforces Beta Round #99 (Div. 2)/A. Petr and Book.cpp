#include <iostream>
using namespace std;
int main()
{
    int n, week[8];
    cin>>n;
    for (int i = 0; i < 7; i++) cin>>week[i];

    int loop = 0;
    while(n > week[loop])
    {
        n -= week[loop];
        loop++;
        if (loop > 6) loop %= 7;
    }
    cout<<loop+1<<endl;
    return 0;
}
