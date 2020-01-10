#include<iostream>
#include<bits/stdc++.h>
#include<set> 
using namespace std;
int sum = 0;
set<set<int > > ss;
int main(void)
{
//	char a[3];
	int n;
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
		{
			int n = i*10+j;
			int m = j*10+i;
			int ma = max(m,n);
			int mi = min(n,m);
			if(ma>9&&(ma-mi==27))
			{
				int a[2];
				a[0] = ma;
				set<int > s(a,a+1);
			//	s.insert(ma)
				ss.insert(s);
				cout<<ma<<endl;	
			}	
		}
//	sprintf(str,"%d",num_2);
	
	
	cout<<ss.size()<<endl;
	
}
