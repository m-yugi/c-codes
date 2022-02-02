#include<stdio.h>
#include<stdlib.h>
int main(){
    // int a=10;
    // int* p=&a;
    // int** q=&p;
    // *p=20;
    // printf("%d\n",a);
    // printf("%d\n",p);
    // printf("%d\n",*p);
    // printf("%d\n",q);
    // printf("%d\n",*q);
    // printf("%d\n",**q);
    //int *arr= malloc(sizeof(int)*5);
    // for(i=0;i<5;i++){
    //     arr[i]=i;
    // }
    // for(j=0;j<5;j++){
    //     printf("%d\n",arr[j]);
    // }
    int** ptr= (int**)malloc(5*sizeof(int*));
    int i,j,k,l,m,count;
    for(k=0;k<5;k++){
        ptr[k]=(int*)malloc(5*sizeof(int));
    }
    for(l=0;l<5;l++){
        for(m=0;m<5;m++){
            ptr[l][m]=++count;
            printf("%d\n",ptr[l][m]);
        }
    }
        for(i=0;l<5;l++){
            for(j=0;m<5;m++){
            printf("%d\n",ptr[l][m]);
        }
    }
}
// #include <stdio.h>
// #include <stdlib.h>
 
// int main()
// {
//     int r = 3, c = 4, i, j, count;
 
//     int** arr = (int**)malloc(r * sizeof(int*));
//     for (i = 0; i < r; i++)
//         arr[i] = (int*)malloc(c * sizeof(int));
 
//     // Note that arr[i][j] is same as *(*(arr+i)+j)
//     count = 0;
//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             arr[i][j] = ++count; // OR *(*(arr+i)+j) = ++count
 
//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             printf("%d ", arr[i][j]);
 
//     /* Code for further processing and free the
//        dynamically allocated memory */
 
//     for (int i = 0; i < r; i++)
//         free(arr[i]);
 
//     free(arr);
 
//     return 0;
// }
