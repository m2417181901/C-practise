#include<iostream>
#include<cstring>
#include <errno.h>
#include <stdlib.h>
using namespace std;
void jk(int**a){
	a[1][2]=123;
}
int max(int x,int y){
	return x>y?x:y;
}
void matrixMultiply(int * *a,int * *b,int * *c,int ra,int ca,int rb,int cb)
{
	if(ca!=rb)
	{ 
		cout<<"¾ØÕó²»¿É³Ë"<<endl;
		exit(0);
	} 
	for(int i=0;i<ca;i++)
		for(int j=0;j<cb;j++)
		{
			int Sum=a[i][0]*b[0][j];
			for(int k=1;k<rb;k++)
				Sum+=a[i][k]*b[k][j];
				
			c[i][j]=Sum;
			
		}		
}
void MatrixChain(int *p,int n,int **m,int **s)
{
	for(int i=1;i<=n;i++) m[i][i]=0;
	for(int r=2;r<=n;r++)
		for(int i=1;i<=n-r+1;i++)
		{
			int j=i+r-1;
			m[i][j]=m[i+1][j]+p[i-1]*p[i]*p[j];
			s[i][j]=i;
			for(int k=1;k<j;k++){
				int t=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(t<m[i][j])
				{
					m[i][j]=t;
					s[i][j]=k;
				}
			}
		}	
 } 
int main(){
	int a[2][3]={1,2,3,4,5,6};
	int c[2][2];
	int b[3][2]={1,2,3,4,5,6};
	cout<<c[1][2]<<213<<endl;
	int m, n;
    int i, j;
    int **p;

    printf("please input the row and col:");
    cin >> m >> n;
    //scanf("%d%d", &m, &n);

    p = (int**)malloc(sizeof(int*)*m); //???  

    for (i = 0; i < m; i++)
    {
        *(p + i) = (int*)malloc(sizeof(int)*n);//???  
    }
    //????  
    printf("please input data:");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> p[i][j];
    jk(p);
	cout<<p[1][2]<<endl;        
//	int (*v)[2] = &b;
//	int (*x)[3] = &a; 
//	int (*z)[2] = &c;
//	matrixMultiply((int**)a,(int**)b,(int**)c,2,3,3,2);
	
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
		{
			cout<<c[i][j];
		} 
	
	
	 
	
	
	
	
	
	
	
	
	return 0;
} 
