#include<iostream>
#include<cmath>
using namespace std;
int ma[13]; 
void show(int n,int yin[]){
	cout<<n+1<<endl;
	for(int i=0;i<=n;i++){
		if(i!=0){
			cout<<"*";
		}
		cout<<yin[i];
	}
	cout<<endl;
}
int main()
{
	
	int mx=0;
	long long int n;
	int b=0;
	cin>>n;
	

	
	
	
	for(int i=2;i<=sqrt(n);i++)
	{
		int mb[13];
		int a=0;
		long long int c = n;
		for(int j=i;(!(c%j))&&c;j++)
		{
			mb[a] = j;
			a++;
			if(a>b)
			{
				b = a;
				for(int k=0;k<a;k++)
				{
					ma[k] = mb[k];
					mx = k;
				}	
			}
			c/=j;	
		}	
	}
	
	
	if(b==0)
	{
		cout<<1<<endl;
		cout<<n<<endl;
	}
	else
		show(mx,ma);
		
	return 0;	
	
}
