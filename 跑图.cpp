#include<bits/stdc++.h>
#define INF 100000
using namespace std;
const int inf = 99999999;
struct P{
	int x;
	int y;
	int step;
	P(int x,int y,int step)
	{
		this->x = x;
		this->y = y;
		this->step = step;
	}
}; 
int n,m;
int mo[4][2] = {0,1,0,-1,-1,0,1,0};
bool c[501][501];
int k[501][501];
queue<P> que;
void bfs()
{
	while(que.size())
	{
		P p = que.front();
		que.pop();
		for(int i =0;i<4;i++)
		{
			int xl = p.x + mo[i][0];
			int yl = p.y + mo[i][1];
			if(xl>=n||yl>=m||xl<0||yl<0||k[xl][yl])continue;
			k[xl][yl] = p.step + 1;	
			que.push(P(xl,yl,p.step+1));		
		}			
	}		
}		
int main()
{
	cin>>n>>m;
	int x;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			k[i][j] = 0;	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			{
				
				cin>>x;
				if(x==1)
				{
					k[i][j] = inf;
					que.push(P(i,j,0));
				}
			}
	bfs();		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(j != 0)
    			cout << " ";
			if(k[i][j] != inf)
			cout<<k[i][j];
			else
			cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
