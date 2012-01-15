#include<iostream>
#include<string.h>
using namespace std;
const char vowels[] = "AOYUIEaoyuie";
bool is_vowel(char ch)
{
    for(int i = 0;i < 12;i ++)
        if(ch == vowels[i]) return true;
    return false;
}
int main()
{
    char s[101];
    cin>>s;
    for(int i = 0;i < strlen(s);i ++)
    {
        if(is_vowel(s[i])) continue;
        if(s[i]<='Z') cout << "." << char(s[i]-'A'+'a');
        else cout<< "." << s[i];
    }
    cout<<endl;

    return 0;
}
