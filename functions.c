#include <stdio.h>
int add(int a,int b);
int add(int a,int b){
    a+=b;
    add(a,b);
    return a;
}
void main()
{
    int a=1,b=3;
    int c=add(a,b);
    printf("%d",c);
    int d=add(c,b);
    printf("%d",d);
}