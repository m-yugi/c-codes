#include<stdio.h>
#include<stdlib.h>
#define max_size 10
int top;
int arr[max_size];
void push(int n){
    if(top>=max_size){
        printf("\nthe stack is full\n");
    }
    else{
        arr[++top]=n;
        printf("\n%d had been pushed\n",n);
    }
}
void pop(){
    int del;
    if(top==-1){
        printf("\nthe stack is empty\n");
    }
    else{
        del=arr[top];
        top--;
        printf("\n%d had been poped\n",del);
    }
}
int isfull(){
    if(top==max_size){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void peek(){
    printf("\ntop value of the stack is: %d\n",arr[top]);
}
void display(){
    int i;
    for(i=0;i<max_size;i++){
        printf("%d",arr[i]);
    }
}
void main(){
    printf("\nthe size of stack is 10 for the sake of problem so you can only give 10 inputs\n");
     top=-1;
    int flag=1,y,x;
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
            if(isfull()){
            printf("\nthe stack is full\n");
            }
            else{
                printf("\nthe stack is not full\n");
            }
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