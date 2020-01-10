#include<iostream>
#include<algorithm>
using namespace std;
int Partition(int arr[],int p,int r){

    int i = p - 1;
    for(int j=p;j<r;j++)
	{
        if (arr[j] <= arr[r])
		{
            i = i + 1;
            swap(arr[i],arr[j]);
    	}
    swap(arr[i+1],arr[r]);	  
    return i;
	}	
}


void QuickSort(int arr[],int p,int r){
	if (p<r)
	{
        int divIndex = Partition(arr, p, r);
        QuickSort(arr, p, divIndex);
        QuickSort(arr, divIndex + 1, r);
    }
}




int main(){
	int b[10] = {1,8,6,4,9,5,7,3,2,0};
	QuickSort(b,0,9);
	for(int i=0;i<10;i++){
		cout<<b[i]<<' ';
	}
	
	
	
	
	
	return 0;
}

