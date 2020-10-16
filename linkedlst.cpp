#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *next;
};
node *head = NULL;

class linkedlist{
public:
    void inseert(int data,int pos);
    void deleete(int pos);

void deletee(node *t);
    void reversee();
    void print();
   // void h_rev(int n);
    void rec_print(node *p);
    void rec_reverse(node *p);
    void  print1();
};


void linkedlist:: deletee(node *t){
node*temp= head;

if(temp->next == NULL){

return ;}

temp->val= temp->next->val;
temp->next= temp->next->next;
}
void linkedlist :: inseert(int data,int pos){
node *temp= new node();
temp->data= data;
temp->next = NULL;
if (pos == 1){
    temp->next= head;
    head= temp;
    return;
}

node *current = head;

for(int i=0;i<pos-2;i++){
    current= current->next;
}
temp->next= current->next;
current->next= temp;
}

void linkedlist :: deleete(int n){
node *temp=head;

if(n==1){

    temp->next= head;
    delete temp;
    return;
}

for(int i=0;i<n-2;i++){
   temp= temp->next;
}
node *temp2= temp->next;
temp->next= temp2;
delete temp2;
}

void linkedlist:: reversee(){
    node *current,*next,*prev;
    prev= NULL;
    current= head;

    while(current!= NULL){
        next= current->next;
        current->next= prev;
        prev=current;
        current= next;
    }
    head= prev;
}

// void linkedlist:: h_rev(){

// node *current,*next,*prev;
// prev= NULL;
// current= head;

// for(int i=0;i<n;i++){

//     current=current->next;
// }
// if(n%2==0){
//     if(n==(n+1)/2){
//         for(int i=(n+1)/2;i<n;i++){

//             next= current->next;
//             current->next= prev;
//             current= next;
//         }
//     }
// }
// else {
//     if(n == n/2){
//         for(int i=n/2;i<n;i++){
//           next= current->next;
//             current->next= prev;
//             current= next;
//         }
//     }
// }
// current=prev;
// }

void linkedlist:: rec_reverse(node *p){
    if(p->next == NULL)
    {

        head= p;
        return;
    }
rec_reverse(p->next);
node *q= p->next;
q->next=p ;
p->next = NULL;


}
void linkedlist:: print(){

node *temp= head;
while(temp!= NULL){

    cout<<temp->data<<"->";
    temp= temp->next;
}

cout<<"NULL"<<endl;
}

void linkedlist:: rec_print(node *p){
if(p==NULL)
    return;

    cout<<p->data<<"->";
    rec_print(p->next);


}
void linkedlist:: print1(){
    int count1=0;
node *temp= head;
while(temp!= NULL){
        count1++;
    //cout<<temp->data<<"->";
    temp= temp->next;
}
cout<<count1<<endl;
}


int main(){

linkedlist p;
p.inseert(2,1);
p.inseert(3,2);
p.inseert(4,3);
p.inseert(5,4);
p.inseert(6,5);
p.inseert(7,6);
cout<<"original list"<<endl;
p.print();
p.print1();
return 0;
}
