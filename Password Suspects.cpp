#include<iostream>
#include<stdlib.h>
#include<string>
#include<math.h>
using namespace std;
int jiecheng(int a)
{
	int b[a+1];
	b[0] = 1;
	for(int i=1;i<=a;i++)
		b[i] = i*b[i-1];
	return b[a];	
} 
int main(void){	
	int n,m;
	cin>>n>>m;
	string *t = new string[m];
	if(m!=0)
	{
		string *t = new string[m];
		int len = 0;
		for(int i=0;i<m;i++){
			cin>>t[i];
			len += t[i].length();
		}
		int num = jiecheng(len-n);	
	}
	else
	{
		cout<<pow(26,n);	
	}			
}
