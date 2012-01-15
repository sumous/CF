#include<iostream>
using namespace std;
int main()
{
	long long ans[101],n,sum;
	cin>>n;
	for(long long i=1;i<=n;i++) cin>>ans[i];
	sum=ans[1];
	for(long long i=2;i<=n;i++) sum+=i*ans[i]-i+1;
	cout<<sum<<endl;
	return 0;
}
