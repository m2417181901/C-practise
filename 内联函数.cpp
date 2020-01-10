#include<iostream>
using namespace std;

inline int box(int i,int j,int k);

int main()
{
	int a = 10,b = 20,c = 30;
	int v = box(a,b,c);
	cout<<v<<endl;
	int *q = new int[10](0);
	for(int i=0;i<10;i++)
		cout<<q[i]<<' '<<;
	int *p = &a;
	cout<<*p<<endl;
}
// this is a strange /* way to do a comment */ 
inline int box(int i,int j,int k)
{
	return i*j*k;
}
