//BITMAP
#include<iostream>
#include<map>
#include<string>
using namespace std;
#define N 2001
#define FD(x,y) bsmap.find(x)->second.find(y)->second
#define f(x) for(int i=0;i<x;i++)for(int j=0;j<x;j++)
int n,m;
int a[N][N];
int b[N][N];
map<int,map<int,string> > bsmap;
map<int,string> c;
string py(int x,int y)
{
	string s;
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
		{
			int n = a[i+x][j+y] - a[x][y];
			int l;
			while(1)
			{
				l = n%10;
				s += l + '0';
				n = n/10;
				if(n==0)
					break;	
			} 	
		}
	return s;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) 
			cin>>a[i][j];
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
			cin>>b[i][j];		
	string ss;
	f(m)
	{
		int n = a[i][j] - a[0][0];
			int l;
			while(1)
			{
				l = n%10;
				ss += l + '0';
				n = n/10;
				if(n==0)
					break;
			}
	}
	int k = n - m;
	for(int i=0;i<=k;i++)
		for(int j=0;j<=k;j++)
		{
			bsmap[i][j] = py(i,j);
		}
	map<int,map<int,string> >::iterator it_a;;
	map<int,string>::iterator it_b;
	int sum = 0;
	for(it_a=bsmap.begin();it_a!=bsmap.end();it_a++)
		for(it_b = it_a->second.begin();it_b!=it_a->second.end();it_b++)
		{
			if(it_b->second==ss)
				sum++;
		//	cout<<it_a->first<<' '<<it_b->first<<' '<<it_b->second<<endl;
		}
	cout<<sum<<endl;
	return 0;	
}
