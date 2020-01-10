#include<stdio.h>
#define Maxsize 1000000
typedef struct ArcNode
{
	int adjvex;
	struct ArcNode *next;
	int info;
}ArcNode;
typedef struct
{
	char data;
	ArcNode *first;
}VNode;
typedef struct
{
	VNode adjlist[Maxsize];
	int n,e;
}AGraph;
int visit[Maxsize]
void DFS(AGraph *G,int v)
{
	ArcNode *p;
	visit[v] = 1;
	//此处执行访问操作
	p = G->adjlist[v].first;
	while(p!=NULL)
	{
		if(visit[p->adjvex]!=0)
			DFS(G,p->adjvex);
		p = p->next;			
	} 
}
void BFS(AGraph *G,int v)
{
	ArcNode *p;
	int j;
	int dl[Maxsize],front = 0,real = 0;
	real = (real+1)%Maxsize;
	dl[real] = v;
	while(front!=real)
	{
		front = (front+1)Maxsize;
		j = dl[front];
		p = G->adjlist[j].first;
		while(p!=NULL)
		{
			if(!visit[p->adjvex])
			{
				real = (real+1)%Maxsize;
				dl[real] = p->adjvex;
				visit[p->adjvex] = 1;	
			}
			p = p->next;
		}
	}
}
int main()
{
	for(int i=0;i<Maxsize;i++)
		visit[i] = 0;
}
