#include<bits/stdc++.h>  
using namespace std;  
const long long MAX=1000000;  
long long value[MAX] = {0};  
int main()  
{  
    int k = 0;
  
	long long i=0,j=0,n=sqrt(MAX)+1;  
    long long a[MAX+1]={1,1,0};  

	for(i=2;i<=n;i++)
	{
		for(j=2;j<=MAX/i;j++)  
           a[j*i]=1;  
	}
	for(int l=0;l<100;l++)
	{
		if(a[l])
			continue;
		cout<<l<<' ';	
		value[k++] = l;	
	}	   
//	for(int i = 0;i<k;i++)
////	{
//		cout.width(7);
//		cout<<value[i]<<' ';		
//	}	    
//	
/*	for(int i=1;i*10<MAX;i++)
	{
		int flag = 1;
		int temp = i;
		for(int j=0;j<k-10*i;j++)
		{
			for(int l=1;l<10;l++)
				if(a[j+temp]||value[j+temp]>value[k-1])
				{
					flag = 0;
					break;
				}
				else
				{
					temp = temp + i;	
				}	
			if(flag)
			{
				cout<<i;
				return 0;
			}
		}
	}
    return 0;  
 */      
}

