#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
#define N 17
int num = 0;
int a[N] ={0};
stack<int> s;
int xx = 0;
void dfs(int x,int y,int z)
{
	if(x==32)
	{
		num++;
		return;
	}
	if(y>z)
	{
		if(y<16)
		dfs(x+1,y+1,z);
		if(z<16)
		dfs(x+1,y,z+1);
	}	
	else
	{
		if(y==z)
			dfs(x+1,y+1,z);
	}	
}
int main()
{
	dfs(0,0,0);
	cout<<num<<endl;
}
