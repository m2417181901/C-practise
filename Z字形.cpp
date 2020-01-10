#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y)
{
	if(x%y==0&&x!=0)
		return true;
	else
		return false;
}



int main(void)
{
	string s;
	int n;
	cin>>s>>n;
	string *ss = new string [n];
	
	int l=0,h=0;		
	for(int i=0;i<s.length();i++)
	{
		if(l%2==1)
		{
			ss[h] += s[i];
			h--;
			if(h==0)
			{
				l++;
				h = 0;
			}	
		}
		else
		{
			ss[h] += s[i];
			h++;
			if(check(h,n))
			{
				l++;
				h = n-2;
			}	
		}
			
				
	}
//	string sss;
	for(int i=0;i<=n;i++)
	{
		cout<<ss[i];		
	}	
//	cout<<ss[1]<<endl;	
		
	
	
		
	
	
	
	
	
	
	
	
	return 0;	
}
