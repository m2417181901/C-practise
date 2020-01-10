#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(void)
{
  int n,m;
  cin>>n>>m;
  int Sum = 0;
  int num = 0;
  for(int i=n;i<=m;i++)
  {
    Sum += i;
 //   if(num%5==0)
 //   	cout<<i;
 //   else if(i<0)	
//		cout<<setw(4)<<i;
 //   else
    	cout<<setw(5)<<i;
	num++;
    if(num%5==0)
      cout<<endl;
  }
  if(num%5==0)
    cout<<"Sum = "<<Sum;
  else
  {
    cout<<endl;
    cout<<"Sum = "<<Sum<<endl;
  }
    
}
