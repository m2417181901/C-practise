#include<iostream>
using namespace std;
int a[3][4];
int b[10] = {0};
int sum = 0;
int pd(int k, int i, int j){
	if (i-1>=0 && (a[i - 1][j] == k - 1 || a[i - 1][j] == k + 1) )
		return 0;
	if (j-1>=0 && (a[i][j - 1] == k + 1 || a[i][j - 1] == k - 1) )
		return 0;
	if (i-1>=0 && j-1>=0 && (a[i - 1][j - 1] == k + 1 || a[i - 1][j - 1] == k - 1))
		return 0;
	if (i-1>=0 && j+1<4 && (a[i - 1][j + 1] == k + 1 || a[i - 1][j + 1] == k - 1))
		return 0;
	if (j + 1 < 4 && (a[i][j + 1] == k + 1 || a[i][j + 1] == k - 1))
		return 0;
	if (i + 1 < 3 && (a[i + 1][j] == k + 1 || a[i + 1][j] == k - 1))
		return 0;
	if (i + 1 < 3 && j - 1 >= 0 && (a[i + 1][j - 1] == k + 1 || a[i + 1][j - 1] == k - 1))
		return 0;
	if (i + 1 < 3 && j + 1 < 4 && (a[i + 1][j + 1] == k + 1 || a[i + 1][j + 1] == k - 1))
		return 0;
	return 1;
}
void ceshi(int x,int y)
{
	cout<<1<<endl;
	if(x==2 && y==3)
	{
		sum++;
		cout<<sum<<endl;
		return;	
	}
	for(int i=0;i<10;i++)
	{
		if(pd(i,x,y)&&b[i]==0)
		{
			a[x][y] = i;
			b[i] = 1;
			if (y == 3)
					ceshi(x + 1, 0);
				else
					ceshi(x, y + 1);
			a[x][y] = -2;
			b[i] == 0;	
		}	
	}	
}
int main(void)
{
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			a[i][j] = -2;	
	ceshi(0,1);
	cout<<sum<<endl;
} 
