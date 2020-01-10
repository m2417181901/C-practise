#include<iostream>
#include<stdlib.h>
using namespace std;
int sum = 0; 
void cizhuan(int t){
	if(t==1){
		sum++;
		return;
	}
	if(t==2){
		sum = sum + 2;
		return;
	}
	cizhuan(t-1);
	cizhuan(t-2);		
}
int main(void){
	int t;
	cin>>t;
	cizhuan(t);
	cout<<sum<<endl;
}
