#include<bits/stdc++.h>
using namespace std;

double mp[30][30];

double s(double ss)
{
	return ss/2;
}
int main()
{
	memset(mp,0,sizeof(mp));
	freopen("Èý½Ç.txt","r",stdin);
	for(int i=0;i<29;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cin>>mp[i][j];
	//		cout<<mp[i][j]<<' ';
		}
	//	cout<<endl;	
	}	
	double k[30];
	memset(k,0,sizeof(k));
	for(int i=1;i<29;i++)
	{
		mp[i][0] += s(mp[i-1][0]);
		for(int j=1;j<=i;j++)
		{
			mp[i][j] += s(mp[i-1][j-1]+mp[i-1][j]);
		}
	//	mp[i][i] += s(mp[i-1][i-1]);
	}
	k[0] = s(mp[28][0]);
	for(int i=1;i<30;i++)
	{
		k[i] = s(mp[28][i-1]+mp[28][i]);
	}	
	for(int i=0;i<30;i++)
		cout<<k[i]<<' ';
		cout<<endl;	
	
	
	
	
	
	return 0;
} 
