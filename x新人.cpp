#include<iostream>
#include<stdlib.h>
using namespace std;
int t;
int x[2][2] = {0};


void ad(int z,int y){
	if(z%t==0){
		if(((z/t)-1)%2==0||(z/t)==0)
		{
			x[y][0] = (z/t)-1;
			x[y][1] = t;
			
		}
		else
		{
			x[y][0] = (z/t)-1;
			x[y][1] = 1;
			
		}	
	}
	else{
	
		if((z/t)%2==0||(z/t)==0)
		{
			x[y][0] = z/t;
			x[y][1] = z%t;
			
		}
		else
		{
			x[y][0] = z/t;
			x[y][1] = abs(t-(z%t)+1);
			
		}
	}
}


int main(void){
	int n,m,Sum;
	cin>>t>>n>>m;
/*	int **s = new int*[n];
	for(int i=0;i<n;i++)
		s[i] = new int[m];
*/
	
	ad(n,0);
	ad(m,1);
	cout<<x[0][0]<<' '<<x[0][1]<<endl;
	cout<<x[1][0]<<' '<<x[1][1]<<endl;
	Sum = abs(x[0][0]-x[1][0])+abs(x[0][1]-x[1][1]);	
	cout<<Sum<<endl;	
}
