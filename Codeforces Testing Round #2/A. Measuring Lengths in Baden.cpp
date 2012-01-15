#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int inch = n/3;
    if(n%3==2) inch++;

    cout<<inch/12<<" "<<inch-(inch/12)*12<<endl;
    return 0;
}
