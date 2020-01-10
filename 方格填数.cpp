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
void c(int i,int j)
{
	if (i == 2&&j==3){//?????????????????,num++
		sum++;
	//	cout<<num<<endl;
		return;
	}
	for(int k=0;k<=9;k++)
	{
		if(pd(k,i,j)&&b[k]==0)
		{
			
			b[k] = 1;
			a[i][j] = k;
			if (j == 3)
				c(i + 1, 0);
			else
				c(i, j + 1);
			a[i][j] = -9;
			b[k] = 0;	
		}	
	}	
}
void f(int i, int j){
	if (i == 2&&j==3){//?????????????????,num++
		sum++;
	//	cout<<num<<endl;
		return;
	}
		for (int k = 0; k <= 9; k++){
			if (pd(k, i, j)&&b[k]==0) {//??8????????,??????
				b[k] = 1;
				a[i][j] = k;
				if (j == 3)//??????????
					f(i + 1, 0);
				else
					f(i, j + 1);
				a[i][j] = -9;
				b[k] = 0;
			}
		}
}
int main(void)
{
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			a[i][j] = -9;	
	c(0,1);
	cout<<sum<<endl;
} 
