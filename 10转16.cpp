#include<string> 
#include<iostream>
using namespace std;
int main (){
	int a,i = 0,c,b=0;
	cin>>a;
	int t = a;
	string x;
	while(true)
	{
		c = a%16;
		a = a/16;
	
		switch(c)
		{
			case 0 :
				x[i++] = '0';
				break;
			case 1 :
				x[i++] = '1';
				break;
			case 2 :
				x[i++] = '2';
				break;
			case 3 :
				x[i++] = '3';
				break;
			case 4 :
				x[i++] = '4';
				break;
			case 5 :
				x[i++] = '5';
				break;
			case 6 :
				x[i++] = '6';
				break;
			case 7 :
				x[i++] = '7';
				break;
			case 8 :
				x[i++] = '8';
				break;
			case 9 :
				x[i++] = '9';
				break;
			case 10 :
				x[i++] = 'A';
				break;
			case 11 :
				x[i++] = 'B';
				break;
			case 12 :
				x[i++] = 'C';
				break;
			case 13 :
				x[i++] = 'D';
				break;
			case 14 :
				x[i++] = 'E';
				break;
			case 15 :
				x[i++] = 'F';
				break;													
		}	
		if(a<16)
			b++;
		if(b==2)
			break;
	} 
	if(x[i-1] == '0')
		i = i-1;	
	for(int o = i-1;o>=0;o--)
		cout<<x[o];	
	cout<<endl;

	


	
	return 0;
} 
