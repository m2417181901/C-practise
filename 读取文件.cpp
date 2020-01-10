#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	double sum = 0;
	while(cin>>x>>y)
	{
		sum += (x*y)/100;
		cout<<x<<endl;	
	}
	cout<<sum<<endl;
}
