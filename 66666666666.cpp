#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int sum = 0;
	
	
	for(int i=1;i<=n;i++)
		sum += i;
	int *dp = new int[sum+1];
	for(int i=0;i<sum+1;i++)
		dp[i] = 0;
	dp[0] = 1;
	for(int i=1;i<n;i++)
		for(int k=sum;k>=i;k--)
			dp[k] += dp[k-i];	
	cout<<dp[sum]/2<<endl;
	
	
	
	
	
	
	
	return 0;
}
