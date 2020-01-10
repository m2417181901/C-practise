#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>x;
	int n;
	while(cin>>n) 
	{
		x.push_back(n);
		if(cin.get()== '\n')
			break;
			
	}
	for(int i=0;i<x.size();i++)
	{
		if(x[i]==250)
		{
			cout<<i+1<<endl;	
			break;
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
