#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
bool ch[257];
int main(void)
{
	string a,b;
	getline(cin, a);
    getline(cin, b);
	
	for(int i=0;i<257;i++)
		ch[i] = true;
	for(unsigned int i=0;i<b.length();i++)
	{
		int x = b[i] - '0' + 48;
		ch[x] = false;	
	}
	for(unsigned int i = 0;i<a.length();i++)
	{
		if(ch[(a[i] - '0')+48])
			printf("%c",a[i]);
	}	
} 
