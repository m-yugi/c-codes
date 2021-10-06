#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top;
void push(int n){
    struct node* ptr=(struct node*) malloc(sizeof(struct node));
    ptr->data=n;
    if(top==NULL){
        ptr->next=NULL;
        top=ptr;
    }
    else{
        ptr->next=top;
        top=ptr;
    }
    printf("\n%d has been pushed\n",ptr->data);
}
void pop(){
    struct node* ptr=top;
    if(top==NULL){
        printf("the stack is empty");
    }
    else{
    int del=ptr->data;
    top=top->next;
    ptr->next=NULL;
    free(ptr);
    printf("\n%d has been poped\n",del);
    }
}
void peek(){
	if(top!=NULL){
		printf("\n%d is the top of the stack\n",top->data);
	}
	else{
		printf("the stack is empty");
	}
}
void display(){
    struct node* ptr=top;
    while(ptr!=NULL){
        printf("%d, ",ptr->data);
        ptr=ptr->next;
    }
}
int isempty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void main(){
top=NULL;
 int flag=1,n,x,y;
 printf("as we have created the stack using linked list heap memory is the limit so no capacity is required");
    while (flag)
    {
        printf("\nplease select the option\n");
        printf(" 1.push\n 2.pop\n 3.peek\n 4.isempty\n 5.isfull\n 6.display\n 7.exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("\nenter the value you want to push to stack\n");
            scanf("%d",&y);
            push(y);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            if(isempty()){
            printf("\nstack is empty\n");
            }
            else{
                printf("\nstack is not empty\n");
            }
            break;
        case 5:
            printf("\ntechnically we ae using heap memory\n as the stack memory so we cant tell if the stack is full\n because we dont know the capacity of the heap\n");
            break;
        case 6:
            display();
            break;
        case 7:
            flag=0;
            break;
        default:
        printf("\nsorry wrong input\n");
            break;
        }
    }
}
