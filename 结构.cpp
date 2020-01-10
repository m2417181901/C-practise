#include <stdio.h>  
#include <string.h>  
#include<iostream>
#include <algorithm> 
using namespace std; 
typedef struct   
{  
    int a:5;  
    int b:3;  
}T;  
int main(void)  
{  
  int a[5] = {1,2,3,4,5};
  int b = find(a,a+5,3) - a;
  cout<<b; 
  
  /*  char str[] = "2123456";  
    T st;
    int y;
	char x;
	  cout<<y<<endl;
    cout<<sizeof(T)<<endl;
	memcpy(&st, str, sizeof(T));  
    printf("T.a=%d \nT.b=%d\n", st.a, st.b);  
    */ 
    return 0;  
}  
