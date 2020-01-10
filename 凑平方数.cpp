#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
#define N 99380
bool charge(int y)
{
	int f[10];
	memset(f,0,sizeof(f));
		int j;
		while(y)
		{
			j = y%10;
			f[j]++;
			if(f[j]==2)
				return false;
			y = y/10;
		}
	return true;
}
void init()
{
	long long int i=0;
	for( i=0;i<N;i++)
	{
		long long int num = i*i;
		if(charge_k(tostring(num))) nn[k++] = num;
	}
	
	
	
	
}
int charge_k(string a)
{
	int l = a.length();
	int sum = 1;
	int t[10];
	memset(t,0,sizeof(t));
	for(int i=0;i<l;i++)
	{
		if(a[i]=='.')
			continue;
		int tmp = a[i] - '0';
		t[tmp]++;
			
	}
	for(int i=0;i<10;i++)
	{
		if(t[i]>1)
			return 0;
		sum += t[i];		
	}	
	return sum;	
}
long long int nn[100000];
int k = 0;
int num = 0;
string tostring(long long int num)
{
	string result = "";
	int tmp = num;
	if(num==0)
		result += "0";
	while(num!=0)
	{
		char tmp = num%10 + '0';
		result.insert(0,1,tmp);
		num/=10;
	}
	result.insert(0,1,'.');
	return result;		
}
void dfs(int x,string s)
{
	
		int kk = charge_k(s);
		if(!kk)
		{
			return;
		}
		if(kk==11)
		{
			num++;
			cout<<num<<endl;
			cout<<s<<endl;
			return;
		}	
	
	for(int i=x;i<k;i++)
	{
		dfs(i+1,s+tostring(nn[i]));
	}
}

int main()
{
/*	for(long long int i=0;i<=N;i++)
	{
		long long l = i*i;
		if(charge(l))
		{
			nn[k++] = l;
		}		
	}
	*/
//	string s = "1213456789";
//	cout<<charge_k(s);	
	dfs(0,"");
	cout<<num<<endl;
		
	return 0;
} 
