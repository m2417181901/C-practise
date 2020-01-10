#include<iostream>
#include<algorithm>
using namespace std;
int weizhi(int a[],int p,int r){
	int i = p;
	int j = r+1;
	int x = a[p];
	while(true)
	{
		while(true)
			if(a[++i]<x&&i<r)
				break;
		while(true)
			if(a[--j]>x)
				break;
		if(i>=j)
			break;
		swap(a[i],a[j]);
	}
	a[p] = a[j];
	a[j] = x;
	return j;
}
void QU(int a[],int p,int r){
	int q = weizhi(a,p,r);
	QU(a,p,q-1);
	QU(a,q+1,r);

} 
int main (){
	int a[5] = {1,8,3,4,5};
	QU(a,0,5);
	cout<<a[3];
	return 0;
}
