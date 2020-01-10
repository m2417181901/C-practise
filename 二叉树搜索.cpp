#include<iostream>
#include<algorithm>
#include <queue>
using namespace std;
queue<int>que;
const int N = 10110;
int post[N];
int in[N];
int fps;
typedef struct 
{
	int w;
	int l;
	int r;		
}tree;
void sec(int l,int r,int n,tree *p)
{
	if(l>=r)
	{
		p[n].w = -1;
		return;	
	}
	int a = post[fps--];
	p[n].w = a;
	p[n].l = 2*n;
	p[n].r = 2*n + 1;
	int w = find(in,in+r,a) - in;
	
	sec(w+1,r,2*n+1,p);
	sec(l,w,2*n,p);
}
void ceng(tree *p)
{
	que.push(1);
	int z;
	while(!que.empty())
	{
		z = que.front();
		que.pop();
		if(p[z].w!=-1)
		{
			if(z != 1)
				cout<<' ';
			cout<<p[z].w;
			que.push(p[z].l);
			que.push(p[z].r);
		}	
	}
	cout<<endl;
/*	if(p[n].w!=-1)
	{
		
		cout<<p[n].w<<endl;		
		post(p,p[n].r);
		post(p,p[n].l);
		
	}
	else
		return;	
*/		
}
int main(void)
{
	tree tree[N];
	int n;
	cin>>n;
	fps = n - 1; 
	for(int i=0;i<n;i++)
	{
		cin>>post[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>in[i];
	}
	sec(0,n,1,tree);
	ceng(tree);

}
