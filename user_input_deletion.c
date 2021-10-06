#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void insertbig(int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    if(head==NULL){
        ptr->next=NULL;
        head=ptr;
    }
    else{
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    }
}
void end(int n){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=n;
    if(head==NULL){
        node->next=NULL;
        head=node;
    }
    else{
    struct Node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=node;
    node->next=NULL;
    }
}
void pos(int n,int pos){
	int i;
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr=head;
    for(i=0;i<pos-1;i++){
        ptr=ptr->next;
    }
    node->data=n;
    node->next=ptr->next;
    ptr->next=node;
}
void delbig(){
    struct Node* ptr=head;
    head=ptr->next;
    free(ptr);
    printf("\n1st node has been deleted\n");
}
void delend(){
    struct Node* ptr=head;
    while (ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;
    printf("\nthe last node had been deleted\n");
}
void delpos(int i){
    int j;
    struct Node* ptr=head;
    struct Node* ptr1;
    for(j=0;j<i-2;j++){
        ptr=ptr->next;
    }
    ptr1=ptr->next;
    ptr->next=ptr->next->next;
    free(ptr1);
    printf("\nthe node at %dnd had been deleted\n",i);
}
void display(){
    struct Node* ptr=head;
    if(head==NULL || head->next==NULL){
    	printf("\nthe list is empty\n");
	}
	else{
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
}
int size(){
    int count=0;
    struct Node* ptr=head;
    if(head==NULL || head->next==NULL){
        return count;
    }
    else{
    while(ptr->next!=NULL){
        ptr=ptr->next;
        count++;
    }
    }
    return count+1;
}
void main(){
    head=NULL;
    int n,x,y,i;
    printf("the linked list should have atleast two element before inserting at a position\n");
    printf("pls select the options\n");
    while(1){
    printf(" 1.insert at the begininning\n 2.insert at the end\n 3.insert at a position\n 4.display\n 5.delete at the beginning\n 6.delete at the end\n 7.delete at a positon\n 8.size\n 9.exit\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
    	printf("\nenter the value of the element\n");
    	scanf("%d",&n);
        insertbig(n);
        break;
    case 2:
    	printf("\nenter the value of the element\n");
    	scanf("%d",&n);
    	end(n);
    	break;
    case 3:
    	printf("\nenter the pos of the element\n");
    	scanf("%d",&n);
        if(n>size()){
            printf("\nthe node you have entered is in valid\n");
        }
        else{
    	printf("\nenter the value of the element\n");
    	scanf("%d",&y);
    	pos(y,n);
        }
    	break;
    case 4:
    	display();
    	break;
    case 5:
        delbig();
        break;
    case 6:
        delend();
        break;
    case 7:
        printf("\n enter the position of the element you want to delete\n");
        scanf("%d",&i);
        delpos(i);
        break;
    case 8:
        printf("\nsize if the list is: %d\n",size());
        break;
    case 9:
    	exit(0);
    	break;
    default:
    	printf("wrong choice");
        break;
    }
}
}
