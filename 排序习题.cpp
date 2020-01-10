//排序习题
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
void sp(int &a,int &b)
{
	int k = a;
	a = b;
	b = k;
}
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode;

int Lnodesort(int *p,int len,LNode *q)
{
	LNode *A;
	LNode *B = (LNode*)malloc(sizeof(LNode));
	q->next = B;
	B->next = NULL;
	q->next->data = p[0];
	for(int i=1;i<len;i++)
	{
		A = q;
		while(A->next->data<p[i]&&A->next->next!=NULL)
		{
			printf("%d ",A->next->data);
			A = A->next;
		}
		LNode *a = (LNode*)malloc(sizeof(LNode));
		if(A->next->next==NULL&&A->next->data<p[i])
		{
			A->next->next = a;
			a->data = p[i];
			a->next = NULL;
		}
		else
		{
			a->next = A->next;
			A->next = a;
			a->data = p[i];
		}
		printf("\n");
	}
	q->data = len;
}
//书上代码
void CreatLink(LNode *&h,char R[],int n)
{
	//初始化链表 
	int i;
	LNode *s,*t;
	h = (LNode*)malloc(sizeof(LNode));
	h->next = NULL;
	t = h;
	for(i=0;i<n;i++)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = R[i];
		t->next = s;
		t = s;
	}
	t->next = NULL;
} 
void LSort(LNode *h)
{
	LNode *p,*pl *q,*pre;
	if(h->next!=NULL)
	{
		p = h->next->next;
		h->next->next = NULL;
		while(p!=NULL)
		{
			pre = h;
			q = pre->next;
			while(q!=NULL&&q->data<p->data)
			{
				pre = q;
				q = q->next;
			}
			pl = p->next;
			p->next = pre->next;
			pre->next = p;
			p = pl;
		}
	}
}

void ks(int *p,int low,int high)
{
	int i=low,j=high-1;
	while(j>i)
	{
		while(p[i]<0) i++;
		while(p[j]>0) j--;
		if(i<j)
			sp(p[i++],p[j--]);
	}
}
void jssort(int *p,int len,int *a)
{
	int temp;
	int sum;
	//int *a = new int[len];
	for(int i=0;i<len;i++)
	{
		temp = p[i];
		sum = 0;
		for(int j=0;j<len;j++)
		{
			if(p[j]<temp)
				sum++;
		}
		a[sum] = temp;
	}
}




int main()
{
	int a[] = {0,-4,2,3,-8,5,6,-9,65,-78};
	int b[] = {1,5,2,3,4,9,6,8,7,12,56,99};
	int c[] = {1,2,3,4,5,6,8,7,9};
	int len_c = 9;
	int len_a = 10;
	int len_b = 12;
	int *s = new int[len_b];
	LNode *A = (LNode*)malloc(sizeof(LNode));
	Lnodesort(b,len_b,A);
	//ks(a,0,10);
	//jssort(b,len_b,s);
	while(A!=NULL)
	{
		printf("%d ",A->data);
		A = A->next;
	}
//	for(int i=0;i<len_b;i++)
//		printf("%d ",s[i]);

	
	return 0;
}
