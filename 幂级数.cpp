#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
//int num = 0;
int kps(int n,int t=0){
	if(n%2==0)
	{
		t++;
		kps(n/2,t);
	}
	else
	{
		if(n==1)
			return t;
		else
		{
			t++;
			kps((n-1)/2,t);	
		}						
	}	
}




int main(void){
	int n;
	int sum = 0;
	cin>>n;
	while(n!=sum){
	cout<<kps(n-sum)<<endl;
	sum += pow(2,kps(n-sum));
		
	}
	
}
