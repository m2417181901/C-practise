#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <malloc.h>
#define M 1000
using namespace std;
string Sentence,Secret[M];
int Sum=0;
int length=0;
void search(string secret);
int main(void)
{
	cin>>Sentence;
	int n=0,i=0;
	cin>>Sentence;   //???? 
	scanf("%d",&n);
	for(i=0;i<n;i++)  //???? 
		cin>>Secret[i];
	length = Sentence.size();
	//??????? 
	for(i=0;i<n;i++)
		search(Secret[i]);
	cout<<Sum;
//	free(tmpS);
	return 0;
}
void search(string secret)
{
	int i=0,j=0;
	char tmp;
	string tmpSE = secret;
	for(i=0;i<=length-8;i++)  //?????????,?????? 
	{
		secret = tmpSE;
		for(j=i;j<i+8;j++)  //??????? 
		{
			tmp = Sentence[j];
			unsigned int k = secret.find(tmp,0);  //?????????? 
			if(k!=string::npos)  //????,??????? 
				secret.erase(k,1);
			else break;  //???,????? 
		}
		if(j>=i+8) Sum++;  //??????????????,??????? 
	}
}
