#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node* next;
};
struct node* head=NULL;
struct node* rear=NULL;
int is_empty(){
    if(head==NULL && rear==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int n){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->val=n;
    temp->next=NULL;
    if(head==NULL && rear==NULL){
        head=temp;
        rear=temp;
    }
    rear->next=temp;
    rear=temp;
}
void dequeue(){
    struct node* temp=head;
    if(head==NULL){
        printf("the queue had not been created yet\n");
    }
    else if(head==rear){
        head=rear=NULL;
    }
    else{
        head=head->next;
        printf("%d had been popped\n",temp->val);
    }
    free(temp);
}
void top(){
    if(head==NULL){
        printf("the queue is not yet created\n");
    }
    else{
    printf("%d is the top value\n",head->val);
    }
}
void display(){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}
int main(){
    int flag=1,u,n;
    while(flag){
        printf("pls select the options below\n 1.insert value\n 2.pop the value\n 3.display \n 4.top value \n 5. is queue empty \n 6.exit\n");
        scanf("%d",&u);
        switch(u){
            case 1:
             printf("enter the value to put in queue\n");
             scanf("%d",&n);
             enqueue(n);
             break;
             case 2:
             dequeue();
             break;
             case 3:
             display();
             break;
             case 4:
             top();
             break;
             case 5:
             if(is_empty()){
                 printf("the queue is empty\n");
             }
             else{
                 printf("the queue is not empty\n");
             }
             break;
             case 6:
             flag=0;
             break;
             default:
             printf("pls enter the valid input\n");
             break;
        }
    }
}