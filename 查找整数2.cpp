#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n,f;
	cin>>n;
	int *num = (int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	cin>>f;
	int o= -1;
	for(int i=0;i<n;i++)
	{
		if(num[i]==f)
		{
			o=i+1;
			break;
		}
	}
	cout<<o<<endl;
	return 0;
} 
