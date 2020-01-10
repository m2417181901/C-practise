#include<bits/stdc++.h>

using namespace std;
int Max = 0;
int main()
{
	int a[5] = {1,2,3,2,1};
	int b[5] = {3,2,1,4,7};
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			int x = i;
			int y = j;
			int num = 0;
			while(a[x++]==b[y++])
			{
				if(x>5||y>5)
					break;
				num++;	
			}
			Max = max(Max,num);
		}
	cout<<Max<<endl;
}
