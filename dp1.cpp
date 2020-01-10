#include<bits/stdc++.h>
using namespace std;
int a[3][3];
int n = 4;
int m = 4;
int minPathSum() {
        int n = 4;
        int m = 4;
        int **p = new int*[n];
        for(int i=0;i<n;i++)
        {
            p[i] = new int[m];
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                p[i][j] = 0;
        for(int i=1;i<n;i++)
        {
                for(int j=1;j<m;j++)
                {
                    if(i==1)
                        p[i][j] = p[i][j-1] + a[i-1][j-1];
                    else
                        p[i][j] = min(p[i-1][j],p[i][j-1]) + a[i-1][j-1];
                }
        }
        return p[n-2][m-2];
    }
    
int main()
{
	
	freopen("123.txt","r",stdin);
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	minPathSum();
	return 0;
}    
