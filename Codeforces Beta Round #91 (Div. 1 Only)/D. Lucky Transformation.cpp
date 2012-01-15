#include <iostream>
#include <string.h>
using namespace std;
char s[100005];
long n, k;
bool situation(int i, int j)
{
    if(j%2==0)
    {
        if(s[j]=='4'&&s[j+1]=='4' && s[j+2] == '7')
        {
            if((k-i)%2!=0) s[j+1] = '7';
            return true;
        }
        if(s[j]=='4'&&s[j+1]=='7' && s[j+2] == '7')
        {
            if((k-i)%2!=0) s[j+1] = '4';
            return true;
        }
    }
    return false;
}
int main()
{
    cin>>n>>k;
    cin>>s;
    long i = 0;
    for(int j = 0;j < n-1 && i<k;j ++)
    {
        if(situation(i, j)) break;
        if(s[j]=='4' && s[j+1]=='7')
        {//cout<<i<<" "<<k<<" ";
            i++;
            if(j%2 == 0)
            {
                s[j+1] = '4';
            }
            else
            {
                s[j--] = '7';
                j--;
            }//cout<<s<<endl;1000000000

        }
    }
    cout<<s<<endl;
    return 0;
}
