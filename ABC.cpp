#include<bits/stdc++.h>
using namespace std;
#define f(x) for(int x;x<100;x++)
int main()
{
	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			for(int k=0;k<100;k++)
			{
				if(3*i+7*j+k==315&&4*i+j*10+k==420)
				{
					cout<<i<<' '<<j<<' '<<k<<endl;
				//	return 0;
					}	
					
			}
			
	return 0;
} 
