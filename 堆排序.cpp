#include<stdio.h>

void sp(int &a,int &b)
{
	int j = a;
	a = b;
	b = j;
}

typedef struct BtNode{
	int data;
	struct BtNode *lchild;
	struct BtNode *rchild;
}BtNode;

void Sift(int *p,int low,int high)
{
	int temp = p[low];
	int i=low,j=i*2;
	while(j<=high)
	{
		if(j<high&&p[j]<p[j+1]) j++;
		if(temp<p[j])
		{
			p[i] = p[j];
			i = j;
			j = i*2;
		}
		else
			break;
	}
	p[i] = temp;
}

void heapsort(int *p,int len)
{
	for(int i=len/2;i>=1;i--)
	{
		Sift(i,len);
	}
	for(int j=len-1;j>=1;j--)
	{
		sp(p[0],p[i]);
		Sift(p,0,j);
	}
}
