#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[51];
    cin>>s;
    int a = 0, b = 0;
    for(int i = 0;i < strlen(s);i ++)
    {
        if(s[i] == '4') a++;
        else if(s[i] == '7') b++;
    }
    if(a == 0&&b == 0) cout<<"-1"<<endl;
    else if(a>=b) cout<<"4"<<endl;
    else cout<<"7"<<endl;
    return 0;
}
