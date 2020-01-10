#include<iostream>
#define Ma 1000000007
using namespace std;

int long long lx;
bool check[7][7];
int bei[7] = {0,4,5,6,1,2,3}; 
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<7;i++)
		for(int j=0;j<7;j++)
			check[i][j] = true;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		check[a][b] = false;
		check[b][a] = false;	
	}		
	long long dp[2][7];
	int e = 0;
	long long c = 4;
	for(int i=0;i<7;i++)
		dp[e][i] = 1;
	for(long long i=2;i<=n;i++){
		e = 1 - e;
		c = (c*4)%Ma;
		for(int j=1;j<7;j++){
				dp[e][j] = 0;
			for(int k=1;k<7;k++){
					cout<<check[bei[j]][k]<<' ';
				if(check[bei[j]][k])
					dp[e][j] += dp[1-e][k];
					dp[e][j] %= Ma;
			}
			cout<<endl;
		}	
	}
	long long Sum = 0;
	for(int i=1;i<7;i++){
	
		Sum += dp[e][i];
		Sum %= Ma;
		cout<<dp[e][i]<<' ';
	}
	Sum = Sum * c;
	Sum %= Ma;
		cout<<endl;
	cout<<Sum<<endl;
	return 0;
} 
 
