#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int capacity;
    int* array;
};
struct stack* create(int capcity){
    struct stack* s=(struct stack* )malloc(sizeof(struct stack));
    s->capacity=capcity;
    s->top=-1;
    s->array=(int* )malloc(s->capacity * sizeof(int));
    return s;
}
void push(struct stack* s,int data){
    if(data>s->capacity){
    printf("the stack is full");
    }
    else{
        s->array[++s->top]=data;
        printf("\nelement added\n");
    }
}
void peek(struct stack *s){
    if(s->top!=-1){
    printf("the top value is: %d",s->array[s->top]);
    }
    else{
	   printf("stack is empty");
    }
}
int pop(struct stack* s){
    if(s->top==-1){
        printf("the stack is empty");
    }
    else{
    printf("%d has been popped",s->array[s->top--]);
    }
}
int isempty(struct stack* s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack* s){
    if(s->top>=s->capacity){
        return 1;
    }
    else{
        return 0;
    }
}
void display(struct stack* s){
    int i;
    printf("\nthe values of the stack are\n");
    for(i=s->top;i>0;i--){
        printf("%d\n",s->array[i]);
    }
}
void main(){
    int n,x,y;
    printf("enter the capacity of the stack\n");
    scanf("%d",&n);
    struct stack* arr=create(n);
    while (1)
    {
    	printf("\nplease select the option\n");
        printf(" 1.push\n 2.pop\n 3.peek\n 4.isempty\n 5.isfull\n 6.display\n 7.exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("\nenter the value you want to push to stack\n");
            scanf("%d",&y);
            push(arr,y);
            break;
        case 2:
            pop(arr);
            break;
        case 3:
                peek(arr);
                break;
        case 4:
            if(isempty(arr)){
            printf("\nstack is empty\n");
            }
            else{
                printf("\nstack is not empty\n");
            }
            break;
        case 5:
            if(isfull(arr)){
            printf("\nthe stack is full\n");
            }
            else{
                printf("\nthe stack is not full\n");
            }
            break;
        case 6:
            display(arr);
            break;
        case 7:
            exit(0);
            break;
        default:
        printf("\nsorry wrong input\n");
            break;
        }
    }
}