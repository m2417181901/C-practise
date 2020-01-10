#include<iostream>
#include<stdlib.h>
#include<string>
#include<math.h>
using namespace std;
int main(){
	string a = "";
	string b = "";
	int num_a[101] = {0};
	int num_b[101] = {0};
	int num_c[101] = {0};
	int r = 0;
	int j = 0;
	int Max = 0;
	cin>>a;
	cin>>b;
	Max = max(a.size(),b.size());
	for(int i=0;i<Max;i++)
	{
		if(i<(Max-a.size()))
			num_a[i] = 0;
		else
			num_a[i] = (a[i-(Max-a.size())]-'0');
	}
	for(int i=0;i<Max;i++)
	{
		if(i<(Max-b.size()))
			num_b[i] = 0;
		else
			num_b[i] = (b[i-(Max-b.size())]-'0');
	}
	int k = 0;
	for(int i=Max-1;i>=0;i--)
	{
		r = (num_a[i]+num_b[i]) + j;
		j = r/10;
		num_c[k] = r%10;
		k++;
	}
	if(j!=0)
		num_c[k] = j;
	int i = k;
	while(num_c[i]==0)
		i--;	
	for(i;i>=0;i--)
	{
		cout<<num_c[i];	
	}
	
	return 0;
} 
