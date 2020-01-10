#include <iostream>
#include <cstring>
using namespace std;
void preOrder(BiNode*root)
{
	InitStack(S)
	while(root!=NULL||!StackEmpty(S))
	{
		while(root!=NULL)
		{
			cout<<root->data;
			Push(S,root);
			root=root->lchild;
		}
		if(!StackEmpty(S))
		{
			root = Pop(S);
			root = root->rchild;
		}
	}
}





int main()
{
	int* p;
	int a[10]={0};
	
	*p->a[0];
	
	
	
	return 0;	
} 
