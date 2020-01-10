#include<iostream>
#define MOD 1000000007
using namespace std;
bool a[7][7];

int bei[7] = {0,4,5,6,1,2,3};
int main(void)
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<7;i++)
		for(int j=0;j<7;j++){
			a[i][j] = true;	
		}
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x][y] = false;
		a[y][x] = false;	
	}
	int b[2][7];
	int e = 0;
	int count = 4;
	for(int i=1;i<7;i++)
		b[e][i] = 1;
	for(int i=2;i<=n;i++)
	{
		e = 1-e;
		count = count*4;
		for(int j=1;j<7;j++)
		{
			b[e][j] = 0;
			for(int k=1;k<7;k++)
			{
				if(a[bei[j]][k])
					b[e][j] += b[1-e][k];
					b[e][j] %= MOD;
			}				
		}
			
	}
	long long Sum = 0;
	for(int i=1;i<7;i++)
	{
		Sum += b[e][i];
		cout<<b[e][i]<<' ';
		Sum %= MOD;		
	}	
	cout<<Sum*count<<endl;
}
