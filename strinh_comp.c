#include<stdio.h>
#include<string.h>
int main(){
    int digit=0,vowel=0,symbol=0;
    char arr[100];
    gets(arr);
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='A'||arr[i]=='a'||arr[i]=='E'||arr[i]=='e'||arr[i]=='I'||arr[i]=='i'||arr[i]=='O'||arr[i]=='o'||arr[i]=='U'||arr[i]=='u'){
            vowel++;
        }
        else if(arr[i]>=32 && arr[i]<=47 || arr[i]>=58 && arr[i]<=64){
            symbol++;
        }
        else if(arr[i]>=48 && arr[i]<=57){
            digit++;
        }
    }
    printf("digits=%d \n vowels=%d \n symbols=%d \n",digit,vowel,symbol);
}
