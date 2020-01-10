#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;  
int sum=0;
void pai(int n,int p)
{
	if(p==13)
	{
		if(n==13)
		{
			sum++;		
		}
		return;	
	}
	if(n>13)
		return;
	for(int i=0;i<=4;i++)
	{
			n += i;
			pai(n,p+1);
			n -= i;					
	}	

}

int main(void)
{
	
	
	pai(0,0);
	cout<<sum<<endl;
	
	
	
}
