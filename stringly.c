#include<stdio.h>
#include<string.h>
int main(){
    char arr[10];
    int i;
    for(i=0;i<10;i++){
        arr[i]='a'; 
    }
    printf("%s",arr);
    memset(arr,0,10);
    printf("%s",arr);
}