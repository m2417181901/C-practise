#include<iostream>
#include<string>
#include<vector> 
using namespace std;
int num = 0;
int m = 0;
int c(int q,int w)
{
	return q%w==0 ? q/w : (q/w)+1;
}

int main(void)
{
	int x[1000];
	char y[2000];
	int shi[2000];
	int fen[2000];
	int book = 0; 
	int sum = 0;
	int n;
	cin>>n;
//	int *p = new int[n];
	
	for(int i=0;;i++)
	{
		num++;
		scanf("%d %c %d:%d",&x[i],&y[i],&shi[i],&fen[i]);
	//	cout<<x[i]<<' '<<y[i]<<' '<<shi[i]<<' '<<fen[i]<<' '<<endl;
		if(x[i] == 0)
			m++;
		if(m == n)
			break;
	//	cout<<m<<endl;			
	}
	for(int i=0;i<num;i++)
	{
		
		if(y[i]=='S'&&x[i]!=0)
		{
			int a = x[i];
		//	book++;
			for(int j=i+1;j<num;j++)
			{
				if(x[j]==0)
					break; 
				if(x[j] == a&&y[j]=='E')
				{
					sum += (shi[j] - shi[i])*60 + (fen[j] - fen[i]);
					book++;
					break;
				}		
			}
		}
	//	cout<<"fuck"<<' '<<x[i]<<endl;
		if(x[i]==0)
		{
		//	cout<<"1111"<<endl;
			if(book==0)
				cout<<0<<' '<<0<<endl;
			else	
			cout<<book<<' '<<c(sum,book)<<endl;
			book = 0;
			sum = 0;	
		}		
	}
} 
