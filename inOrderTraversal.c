#include<stdio.h>
#include<stdlib.h>
struct Node
{
struct Node *left,*right;
int num;
};
struct Node *start;

struct stackNode
{
struct Node *ptr;
struct stackNode *next;
};

struct stackNode *stackStart;

void push(struct Node *elem)
{
struct stackNode *t;
t=(struct stackNode *)malloc(sizeof(struct stackNode));
t->ptr=elem;
t->next=stackStart;
stackStart=t;
}
struct Node * pop()
{
struct stackNode *t;
struct Node *elem;
t=stackStart;
elem=t->ptr;
stackStart=stackStart->next;
free(t);
return elem;
}

int isEmpty()
{
return stackStart==NULL;    // if stackStart==NULL it will return true else it will return false
}

int insert(int num)
{
struct Node *t,*j;
if(start==NULL)
{
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->left=NULL;
t->right=NULL;
start=t;
return 1;
}
j=start;
while(1)
{
if(num==j->num) return 0;
if(num<j->num)
{
if(j->left==NULL)
{
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->right=NULL;
t->left=NULL;
j->left=t;
break;
}
else
{
j=j->left;
}
}
else
{
if(j->right==NULL)
{
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->left=NULL;
t->right=NULL;
j->right=t;
break;
}
else
{
j=j->right;
}
}
}
return 1;
}

void traverseInorderWithoutRecursion()
{
struct Node  *t,*j;
if(start==NULL)
{
printf("No elements in BST");
return;
}
else
{
for(j=start;j!=NULL;j=j->left) push(j);
while(!isEmpty()) // loop will execute until stack is not empty
{
t=pop();
printf("%d\n",t->num);
if(t->right!=NULL)
{
for(j=t->right;j!=NULL;j=j->left) push(j);
}
}
}
}

int main()
{
int ch,success,data;
start=NULL;
while(1)
{
printf("1. Insert number into BST\n");
printf("2. Inorder traversal of BST\n");
printf("3. Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
if(ch==1) 
{
printf("Enter data to insert:");
scanf("%d",&data);
success=insert(data);
if(success==0)  printf("Cannot insert in BST data already exist\n");
else printf("%d inserted in BST",data);
}
if(ch==2)  
{
traverseInorderWithoutRecursion();
}
if(ch==3)  break;
}
return 0;
}