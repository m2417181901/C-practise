#include<bits/stdc++.h>
using namespace std;
const int N = 4; 
int cost = 100000;
int many = 0;
int costs[4][2] = {10,20,30,200,400,50,30,20};
int a[4] = {10,30,400,30};
int b[4] = {20,200,50,20};
void dfs(int n)
{
	if(n==N)
	{
		cost = min(cost,many);
		return;
	}
	for(int i=0;i<2;i++)
	{
		many += costs[n][i];
		dfs(n+1);
		many -= costs[n][i];
	}	
}
bool cmp(int x[],int y[])
{
	int xx = x[0] - x[1];
	int yy = y[0] - y[1];
	return xx<yy;
}
int main()
{
	//dfs(0);
	int **p = new int*[4];
	for(int i=0;i<4;i++)
	{
		p[i] = new int[2];
		p[i][0] = a[i];
		p[i][1] = b[i];
	}
		
	auto f = [] (int x, int y) { return x + y; };
	auto cm = [] (int x,int y) {
	if(x>y)
		return true;
	else
		return false; 
	};
	cout<<cm(2,3);
	sort(a,a+4,cm);
	for(int i=0;i<4;i++)
		cout<<a[i]<<' ';
	
//	cout<<cost;	
}
