#include<iostream>
#include<algorithm> 
#include<stdlib.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	int* p = (int*)malloc(t*sizeof(int));
	for(int i=0;i<t;i++)
		cin>>p[i];
	sort(p,p+t);
	for(int i=0;i<t;i++)
		cout<<p[i]<<' ';
	
return 0;
}
