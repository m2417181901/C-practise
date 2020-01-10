#include<stdio.h>

typedef struct BtNode{
	int data;
	int bf;
	struct BtNode lchild;
	struct BtNode rchild;
	BtNode(int da,int bf){
		this->lchild = this->rchild = NULL;
		this->data = da;
		this->bf = bf;
	}
}BtNode; 

//Æ½ºâ¶þ²æÊ÷

void insertAVL(BtNode *bt,int taller,int k)
{
	if(bt==NULL)
	{
		BtNode *s = new BtNode(k,0);
		taller = 1;
	}
	else if(bt->data==k)
	{
		taller = 0;
		return 0;	
	}
		
	else if(bt->data>k)
	{
		if(insertAVL(bt->lchild,taller,k)==0)
			return 0;
		if(taller==1)
		{
			insLeftprocess();
		}	
	}
	else
	{
		if(insertAVL(bt->rchild,taller,k)==0)
			return 0;
		if(taller==1)
		{
			insRightprocess();
		}	
	}	
} 
void LL_Rotate(BtNode *bt)
{
	BtNode *q = bt->lchild;
	bt->lchild = q->rchild;
	q->rchild = bt;
	q->bf = bt->bf = 0;
	bt = q;
}
void RR_Rotate(BtNode *bt)
{
	BtNode *q = bt->rchild;
	bt->rchild = q->lchild;
	q->lchild = bt;
	q->bf = bt->bf = 0;
	bt = q;
}
void LR_Rotate(BtNode *bt)
{
	BtNode *q = bt->lchild;
	BtNode *p = q->rchild;
	bt->lchild = p->rchild;
	q->rchild = p->lchild;
	p->lchild = q;
	p->rchild = bt;
	if(p->bf==1)
	{
		q->bf = 0;
		bt->bf= -1;
	}
	else if(p->bf==0)
	{
		q->bf = bt->bf = 0;
	}
	else
	{
		q->bf = 1;
		bt->bf = 0;
	}
	p->bf = 0;
	bt = p;
}


void insLeftprocess(BtNode *bt,int &taller)
{
	BtNode *q;
	if(bt->bf==0)
	{
		bt->bf = 1;
		taller = 1;
	}
	else if(bt->bf==-1)
	{
		bt->bf = 0;
		taller = 0;
	}
	else
	{
		q = bt->lchild;
		if(q->bf==1)
			LL_Rotate(bt);
		else if(q->bf==-1)
		{
			LR_Rotate(bt);	
		}
		taller = 0;	 
	}
 } 
 
 
 
