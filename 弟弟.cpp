#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct Node
{
	int data;//数据域
	struct Node * pNext;
 }NODE,*PNODE;//NODE等价于 struct Node ，PNODE等价于struct Node *
  //函数声明
PNODE create_list(void);
void traverse_list(PNODE pHead);

void deletex_list(PNODE , int);
 
int main()
{
	PNODE pHead = NULL;//等价于struct Node *pHead =NULL 

	pHead = create_list();//create_list()功能：创建一个非循环单链表，并将该链表的头结点赋给pHead 
//	traverse_list(pHead);//遍历链表 
	printf("%d\n",pHead->pNext->data);
	deletex_list(pHead->pNext,2);
    printf("%d",pHead->pNext->data);
	traverse_list(pHead);
	return 0;
}
PNODE create_list(void)
{
	int i;
	int len;
	int val;//用来临时存放用户输入节点的值
	PNODE pHead = (PNODE)malloc(sizeof(NODE));
	if(NULL == pHead)
	{
		printf("分配失败，程序终止！");
		exit(-1);
	 } 
	 PNODE pTail = pHead;
	 pTail->pNext = NULL;
	 printf("请输入您需要生成链表节点的个数：len = ");
	 scanf("%d",&len); 
	 for(i=0; i<len ;++i)
	 {
	 	printf("请输入第%d个节点的值：",i+1);
	 	scanf("%d",&val);
	 	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	 		if(pNew == NULL)
			{
				printf("分配失败，程序终止！");
				exit(-1);
	 		} 
	 	pNew->data = val;
	 	pTail->pNext = pNew;
	 	pNew->pNext = NULL;
	 	pTail = pNew;
	 }
	 return pHead;
}
void traverse_list(PNODE pHead)
{
	PNODE p = pHead->pNext;
	printf("%d ",p->data);
	int i = 0;
	while(i++ <= 4)
	{
		printf("%d ",p->data);
		p = p->pNext;
	}
	printf("\n");
	return;
}

void deletex_list(PNODE pHead, int x)
{
	PNODE p;
	if(pHead == NULL)
	return;
	if(pHead->pNext->data == x)
	{
		p = pHead->pNext;
		pHead->pNext = p->pNext;
		free(p);
	//	deletex_list(pHead,x);
	}
	else
	deletex_list(pHead->pNext,x);
}

