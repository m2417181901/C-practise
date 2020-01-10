#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num[1000] = {0};
	int n;
	int w = 1;
	int a= 1;
	cin>>n;
	num[0] = 1;
	for(int i=1;i<=n;i++){
	
		for(int k=0;k<w;k++){
			
			if(num[k]>=10)
			{
				num[k+1] += (num[k]/10);
				num[k] = (num[k]*i)%10;		
			}
			if((num[k]*i) > 10)
			{
				num[k+1] += (num[k]*i)/10;
				num[k] = (num[k]*i)%10;
				a++;
				cout<<num[k]<<endl;
			}
			else
			{
				num[k] = num[k]*i;
				cout<<num[k]<<endl;	
			}
		}
		w = a;	
	//	cout<<1<<endl;
	}
	
	
	for(int i=a;i>=0;i--)
		cout<<num[i]<<' ';
	
	
	
	return 0;
}
