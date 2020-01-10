#include<bits/stdc++.h>
using namespace std;
#define M 1001
string ch,Sc[M];
int sum = 0;
int length; 
void search(string s)
{
	string S = 	s;
	char tmp;
	int flag = 1;
	int i=0,j=0;
	for(i=0;i<=length-8;i++)
	{
		S = s;
		flag = 1;
		for(j=i;j<i+8;j++)
		{
			tmp = ch[j];
		//	cout<<tmp;
			long long int k = S.find(tmp,0);
		//	cout<<k<<endl;
			if(k!=string::npos)
				S.erase(k,1);
			else
			{
				flag = 0;
				break;	
			}		
		}
		if(flag)
		{
			cout<<"MMM"<<endl;	
			sum++;	
		}	
	}
	
	
}
int main()
{
	int n;
	cin>>ch>>n;
	for(int i=0;i<n;i++)
		cin>>Sc[i];	
	length = ch.length();
	for(int i=0;i<n;i++)
	{
			search(Sc[i]);
	}
	cout<<sum<<endl;
	return 0;
} 
