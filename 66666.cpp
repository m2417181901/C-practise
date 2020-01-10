#include<iostream>
using namespace std;
int num_0[100001];
int sum=0;
void swap(int a[], int i, int j)
{
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}
 
int partition(int a[], int p, int r)
{
    int i = p;
    int j = r + 1;
    int x = a[p];
    while(1){
        while(i<r && a[++i]<x);
        while(a[--j]>x);
        if(i>=j) break;
        swap(a,i,j);
        sum++;
    }
	swap(a,p,j);
    return j;
}
 
void quicksort(int a[], int p, int r)
{
    if(p<r){
        int q = partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }

}
int main(void){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num_0[i];	
	}
	
	quicksort(num_0,0,n-1);
	for(int i=0;i<n;i++)
		cout<<num_0[i]; 
	cout<<sum<<endl;		
}
	
