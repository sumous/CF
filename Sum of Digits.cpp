#include<iostream>
#include<string.h>
#define M 100001
using namespace std;
long t=0,len=0;
char s[M];
void cal()
{
	t++;//cout<<len;
	long sum=0;
	for(int i=0;i<len;i++) sum+=(long)(s[i]-'0');
//	cout<<sum<<endl;
	len=0;
	while(sum!=0)
	{
		s[len++]=sum%10+'0';
		sum/=10;
	}
//	s[len++]=sum;
}
int main()
{
	cin>>s;
	len=strlen(s);
	while(len!=1) cal();
	cout<<t<<endl;
	return 0;
}