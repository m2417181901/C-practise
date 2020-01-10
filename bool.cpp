#include<iostream>
#include<string>
#include<bits/stdc++.h> 
using namespace std;

string longestPalindrome(string s) {
        
       bool a[1001][1001];
    	for(int i=0;i<s.length();i++)
    		for(int j=0;j<s.length();j++)
    			a[i][j] = false;
        int Max = 0;
		int st=0;
		int st1 =0;
		bool e = true;
        for(int i=0;i<s.length();i++)
        {
            a[i][i] = true;
            a[i][i+1] = (s[i]==s[i+1]);
            if( a[i][i+1]&&e)
            {   
                Max = 1;
                e = false;
				st = i;
            }
            
        //    cout<<a[i][i+1]<<' ';
        }
            for(int j=2;j<s.length();j++)
            {
              	for(int i=0;i<s.length();i++)
    			{
    				if(i+j>=s.length())
    					continue;
					a[i][i+j] =  (a[i+1][j+i-1]&&s[i]==s[i+j]);
               	//	cout<<(a[i+1][j+i-1]&&s[i]==s[i+j])<<' ';
               		if(a[i][i+j]&&Max<j)
            		{
            			st = i;
						Max = max(Max,j);	
					}	
				}
            }
        //    cout<<st<<' '<<Max<<endl;
        return s.substr(st,Max+1);	
    }


int main (void)
{
//	string ss;
//	cin>>ss;

//	cout<<longestPalindrome(ss);
	string s;
	cin>>s;
	cout<<longestPalindrome(s);
/*	bool a[1001][1001];
        string ss;
        int Max = 0;
		int st=0;
        for(int i=0;i<s.length();i++)
        {
            a[i][i] = true;
            a[i][i+1] = (s[i]==s[i+1]);
        //    cout<<a[i][i+1]<<' ';
        }
        
            for(int j=2;j<s.length();j++)
            {
              	for(int i=0;i<s.length();i++)
    			{
    				if(i+j>=s.length())
    					continue;
					a[i][i+j] =  (a[i+1][j+i-1]&&s[i]==s[i+j]);
               	//	cout<<(a[i+1][j+i-1]&&s[i]==s[i+j])<<' ';
               		if(a[i][i+j]&&Max<j)
            		{
            			st = i;
						Max = max(Max,j);	
					}	
    				
				}
				  
				  
			    
            }
            
           */ 
   //        int st = 1;
           
//	cout<<"ssss = "<<s.substr(st,st+1);
	
	
}
