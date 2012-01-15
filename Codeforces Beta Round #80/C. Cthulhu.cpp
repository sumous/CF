#include<iostream>
#include<string.h>
using namespace std;
bool e[101][101],vis[101];
int n,m;
void dfs(int v)
{
	vis[v]=true;
	for(int i=1;i<=n;i++)
	{	
		if(vis[i]) continue;
		if(e[v][i]) dfs(i);
	}
}
bool coned()
{
	dfs(1);
	for(int i=1;i<=n;i++) if(!vis[i]) return false;
	return true;
}
int main()
{
//	freopen("data.txt","r",stdin);
	memset(e,false,sizeof(e));
	memset(vis,false,sizeof(vis));
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		e[a][b]=e[b][a]=true;
	}
	if(n!=m) cout<<"NO"<<endl;
	else
	{
		if(coned()) cout<<"FHTAGN!"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}