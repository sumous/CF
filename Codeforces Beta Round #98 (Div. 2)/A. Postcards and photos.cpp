#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    char ch[101];
    int cnt = 0;
    cin>>ch;

    for(int i = 0;i < strlen(ch);i++)
    {
        if(ch[i] == 'C')
        {
            cnt++;
            for(int j = 0;j < 5;j++, i++)
                if(ch[i] == 'P') break;
            i--;
        }
        else
        {
            cnt++;
            for(int j = 0;j < 5;j++, i++)
                if(ch[i] == 'C') break;
            i--;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
