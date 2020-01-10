#include<iostream>
#include<bits/stdc++.h>
int num_2,num_3;
using namespace std;
#define da 1000000007
int main(void)
{
//	int n;
//	char str[10];
//	cin>>n;
//	sprintf(str, "%d", n); 
//	cout<<strlen(str)<<endl;
	for(int i=0;i<100;i++)	
	{
		set<set<char > > ss;
		char str[10];
		char a[10];
		num_2 = i*i;
		num_3 = num_2*i;
		sprintf(str,"%d",num_2);
		sprintf(a,"%d",num_3);
		for(int j=0;j<strlen(str);j++)
		{
			set<char> s(str+j,str+j+1);
		//	set<char> sss(a,a+strlen(a));
			ss.insert(s);
		//	ss.insert(sss);
		//	cout<<ss.size()<<endl;
		}
		for(int j=0;j<strlen(a);j++)
		{
			set<char> s(a+j,a+j+1);
		//	set<char> sss(a,a+strlen(a));
			ss.insert(s);
		//	ss.insert(sss);
		//	cout<<ss.size()<<endl;
		}
		if(ss.size()==10)
			{
				cout<<i<<endl;
				break;
			}
		
	}
	
	
}
