#include<bits/stdc++.h>
using namespace std;
#define N 100001
#define M 1000001
int j[4];
int c[M];
bool ck[M];
int Min = M;
int n,l;
int check(int x)
{
	for(int i=0;i<4;i++)
	{
		if(x<=j[i])
			return (j[i]-x)*c[x];	
	}
}
void dfs(int x,int y)
{
	if(y==3)
	{
		int sum = 0;
	//	for(int i=0;i<4;i++)
	//		cout<<j[i]<<' ';
		for(int i=0;i<l;i++)
		{
			if(c[i]!=0)
			{
				sum += check(i);
				if(sum>=Min)
					return;	
			}
		}		
	//	cout<<sum<<endl;		
		Min = min(sum,Min);
		return;		
	}
	for(int i=x;i<l;i++)
	{
		
		if(!ck[i])
		{
			ck[i] = 1;
			j[y] = i;
			dfs(i,y+1);
		//	j[y] = -1;
			ck[i] = 0;
		}	
	}		
}
int main()
{
	cin>>n>>l;
	int a,b;
	memset(c,0,sizeof(c));
	memset(ck,0,sizeof(ck));
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		c[a] = b;
	}
	j[3] = l;
	dfs(0,0);
	cout<<Min<<endl;
	return 0;
}
