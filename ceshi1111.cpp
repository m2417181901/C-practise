#include<iostream>
#include<map>
#include<string>
#include<math.h>
using namespace std;
int main(void){
	(int *a = new int[100] )= {0};
	
//	int a[100] = {0};
	for(int i=0;i<100;i++)
		cout<<a[i]<<' ';
} 
