#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N = 16;
const int MOD = 997;
struct J{
	int x[N][N];
	J()
	{
		memset(x,0,sizeof(x));
	}
	J operator * (const J &b)const
	{
		J a;
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				for(int k=0;k<N;k++)
				{
					a.x[i][j] += x[i][k]*b.x[k][j];
					a.x[i][j] %= MOD;	
				}
					
			}
		}
		return a;
	}
};
J m;
bool cmp(int i,int j)
{
	for(int row=0;row<4;row++)
	{
		if((i>>row)&1)
		{
			if((j>>row)&1)
			{
				if(row==3)
					return false;
				if((i>>(row+1))&1)
				{
					i -= (1<<(row+1));
				}
				else 
					return false;	
			}
			else
				continue;
		}
		else
		{
			if((j>>row)&1)
			{
				continue;
			}
			else
				return false;
			
		}
	}	
	return true;	
}
int slove(int x)
{
	J j;
	J mm = m;
	for(int i=0;i<N;i++)
		j.x[i][i] = 1;
	while(x)
	{
		if(x&1)
			j = j * mm;
		mm = mm * mm;
		x = x>>1;	 
	}
	return j.x[N-1][N-1];
}
int main()
{
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
		{
			m.x[i][j] = cmp(i,j);
		}
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		scanf("%d%d%d", &n, &m, &k);
		printf("%d %d\n",slove(m-1),slove(n-m-k+1));
	}		
	return 0;
 } 
