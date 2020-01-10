#include <algorithm>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;
const long long  N = 1000010;
int dp[N]={1,1,0};
int prim[N],tot = 0;
int  main()
{
    for(long long i = 2 ; i < N ; i ++)
    {
        if(dp[i])
			continue;
        prim[tot++]=i;
        for(long long  j = i ; j * i < N ; j ++)
		{
            dp[i*j] = 1;
        }
    }
//	for(int i = 0;i<tot;i++)
//	{
//		cout.width(4);
//		cout<<prim[i];
//		}	
	
	for(int i=1;i*10<N;i++)
	{
		
		
		for(int j=0;j<tot;j++)
		{
			int flag = 1;
			int temp = prim[j];
			for(int l=1;l<10;l++)
				if(dp[temp+i]==1||temp+i>N)
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
}

