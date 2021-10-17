#include<stdio.h>
#include<stdlib.h>

typedef struct tNode{
		struct tNode *left;
		int data;
		struct tNode *right;
}tNode;
int isempty();
void push(tNode *p);
tNode* pop();
//create node and returns the node pointer
tNode* newNode(int data)
{
	tNode *temp=NULL;
	temp=(tNode*)malloc(sizeof(tNode));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

//level order traversal
void levelorder(tNode *root)
{
	tNode *temp=root;
	extern int front;
	extern int rear;
	push(temp);
	while(front!= rear)
	{
		temp=pop(temp);
		printf("%d ",temp->data);
		if(temp->left)
			push(temp->left);
		if(temp->right)
			push(temp->right);
	}
	
	
}
//functions of queue
tNode *queue[50];         // global declaration of queue
int front=0;             // global declaration of front
int rear=0;             // global declaration of rear
int isempty()
{
	if(front==rear)
		return 1;
	return 0;
}
//enqueue
void push(tNode *p)
{
	queue[rear++]=p;
}
//dequeue
tNode* pop()
{
	tNode *temp=queue[front++];
	return temp;
}
int main()
{
	tNode *root=NULL;
	root=newNode(10);
	root->left=newNode(5);
	root->right=newNode(6);
	root->left->right=newNode(8);
	root->right->left=newNode(11);
	root->right->right=newNode(15);
	root->right->left->right=newNode(12);
	levelorder(root);
	return 0;
}
