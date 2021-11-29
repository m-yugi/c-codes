#include<stdio.h>
#define maxsize 10
int queue[10];
int front=-1;
int rear=-1;
int is_empty(){
    if(front==-1 && rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int n){
    if(front==-1 && rear==-1){
        front=rear=0;
    }
    else if(rear==(maxsize-1)){
        printf("the queue is full you cant insert more\n");
    }
    else{
        rear+=1;
    }
    queue[rear]=n;
}
void dequeue(){
    if(is_empty()){
        printf("there is no elemnt to pop\ns");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("%d had been poped\n",queue[front]);
        front+=1;
    }
}
void top(){
    printf("%d is the top value\n",queue[front]);
}
void display(){
    for(int i=0;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}
void main(){
    int flag=1,u,n;
    printf("the queue size is only 10 for the sake of this program so you can only enter 10 values thank you\n");
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