#include<stdio.h>

void halffind(int *p,int low,int high,int k)
{
	int temp = (low + high)/2;
	if(low>high)
		printf("Error can not find the Key");
	if(k==p[temp])
		return temp;
	if(k>p[temp])
	{
		return halffind(p,temp+1,high,k);
	}
	else
	{
		return halffind(p,low,temp-1,k);							
	}
}
//非递归
void halffind_2(int *p,int low,int high,int k)
{
	int temp;
	while(low<high)
	{
		temp = (low + high)/2;
		if(p[temp]==k)
			return temp;
		if(p[temp]<k)
			low = temp + 1;
		else
			high = temp - 1;	
	}
 } 
typedef struct BtNode{
	int data;
	struct BtNode lchild;
	struct BtNode rchild;
	BtNode(int da){
		this->lchild = this->rchild = NULL;
		this->data = da;
	}
}BtNode; 
void BSTSearch(BtNode *bt,int k)//二叉排序树用法 
{
	if(bt==NULL)
		return NULL;
	else
	{
		if(bt->data==k)
			return bt;		
		if(k>bt->data)
			return BSTSearch(bt->lchild,k);
		else
			return BSTSearch(bt->rchild,k);	
	}	
} 
//创建二叉排序树
void initBTSearch(BtNode *&bt,int k)
{
	if(bt==NULL)
	{
		bt = new BtNode(k);
	}
	else
	{
		if(bt->data==k)
			return NULL;
		if(bt->data<k)
			return initBTSearch(bt->lchild,k);
		else
			return initBTSearch(bt->rchild,k);		
	}	
} 
void CreatBST(BtNode &*bt,int Key[],int n)
{
	int i;
	bt = NULL;
	for(int i=0;i<n;i++){
		initBTSearch(bt,Key[i]);
	}
}
void DelBtNode(BtNode *bt,int k)
{
	if(bt==NULL)
		return NULL;
	else
	{
		if(bt->data==k)
		{
			Delete(bt);	
		}
		else
		{
			if(bt->data>k)
				return DelBtNode(bt->lchild,k);
			else
				return DelBtNode(bt->rchild,k);		
		}	
	}	
}
void Delete(BtNode &*bt)
{
	if(bt->lchild==NULL&&bt->rchild==NULL)
	{
		free(bt);
	}
	else if(bt->lchild!=NULL&&bt->rchild!=NULL)
	{
		BtNode *q = bt;
		while(q->rchild!=NULL)
		{
			q = q->rchild;
		}
		bt->data = q->data;
		Delete(q);
	}
	else
	{
		if(bt->lchild!=NULL)
		{
			BtNode *q = bt;
			bt = bt->lchild;
			free(q);
		}
		else
		{
			BtNode *q = bt;
			bt = bt->rchild;
			free(q);
		}
	}
}
 
