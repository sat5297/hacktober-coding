// all traversals in recursive and non recursive form

// std i/o - Enter postfix expression: ab*c+d/

// std o/p - inorder - a*b+c/d

#include <iostream>
using namespace std;

class Tree
{
    char data;
    Tree* left;
    Tree* right;
    public: 
        Tree* create(char ele);
        Tree *construct(char p[]);
        void inorder(Tree* base);
        void NRinorder(Tree* base);
};

class Stack
{
    public:
    Tree *t_obj;
    Stack* Stack_link;
    int flag;

    Stack* push(Tree *, Stack *, int);
    Stack* pop(Stack* top);
};

Stack* Stack :: push(Tree *ele, Stack *top, int f)
{
    Stack* newnode = new Stack;
    newnode->flag= f;
    newnode->t_obj = ele;
    newnode ->Stack_link = NULL;

    if(top == NULL)
    {
      top = newnode;  
    }
    else
    {
      newnode->Stack_link = top;
      top = newnode;
    }
    return top;
}

Stack* Stack :: pop(Stack* top)
{
  Stack *temp = top;
  top = top->Stack_link;
  delete temp;
  return top;
}

Tree * Tree :: create(char ele)
{
  Tree* newnode = new Tree;
  newnode -> data = ele;
  newnode -> left = NULL;
  newnode -> right = NULL;
  return newnode;
}

Tree * Tree :: construct(char p[])
{
    Stack *top = NULL;
    Tree *temp;
    int i=0;
    while(p[i] != '\0') 
    {
        if(isalnum(p[i]))
        {
            temp = create(p[i]);
            top = top-> push(temp, top,0);
        }
        else
        {
            temp = create(p[i]);
            temp->right = top->t_obj;
            top = top->pop(top);

            temp->left = top->t_obj;
            top = top->pop(top);

            top = top->push(temp, top,0);
        }
        i++;
    }
    temp = top->t_obj;
    top = top->pop(top);
    return temp;
}

void Tree :: inorder(Tree *base)
{
    if(base == NULL)
        return;
    inorder(base->left);
    cout<<base->data;
    inorder(base->right);
}

void Tree::NRinorder(Tree *base){
	  Stack *top=NULL;
		Tree *current=base;
		while(current!=NULL || top!=NULL){
			while(current!=NULL){
			  top=top->push(current,top,0);
			  current=current->left;
			}

		if(current==NULL  && top!=NULL){
			current=top->t_obj;
			top=top->pop(top);
			cout<<current->data;
			current=current->right;
		}
		else	
			break;
		}
}

int main() 
{   
    char postfix[20];
    Tree obj;
    Tree *root = NULL;
    int op;
    
    cout<<"Enter postfix expression: ";
    cin>>postfix;
    root=obj.construct(postfix);
                
    cout<<"\n Recursive inorder traversal: ";
    obj.inorder(root);
    cout<<"\n Non-recursive inorder traversal: ";
    obj.NRinorder(root);
        
    return 0;
}