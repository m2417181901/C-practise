#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
set<set<int> >ss;
int sum = 0;
bool a[40];
int m = 0;
int b[40] = {0};
void hc(int x,int num)
{
	if(num == sum-num)	
	{
		m++;
		set<int> s(b,b+x);
		ss.insert(s);
		for(int i=0;i<x;i++)
		{
			cout<<b[i]<<' ';
		}
		cout<<endl;
		return;
		
	}
	if(x>=n)
		return;
	for(int i=1;i<=n;i++)
	{
		if(num > sum-num)
			return;
		if(a[i])
		{
			a[i] = false;
			b[x] = i;
	//		cout<<i<<' ';
			hc(x+1,num+i);
			b[x] = 0;
			a[i] = true;	
		}	
	}
}




int main(void)
{
	cin>>n;
	for(int i=1;i<=n;i++)
		sum += i;	
	for(int i=0;i<40;i++)
		a[i] = true;
	hc(0,0);
	cout<<ss.size()/2<<endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
