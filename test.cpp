#include<bits/stdc++.h>
using namespace std;
int a[5];
int dd(int x)
{
	if(!a[x])
		return a[x];
	if(x%2)
		return a[4] = x;
	else
		return a[2] = x+2;
	if(x==5)
		return dd(x-1);		
}






int main()
{
	dd(10);
	cout<<a[0]<<endl;
	
	
	
	
}
