#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size of array: \n");
    int* arr=(int*)malloc(n*sizeof(int));
    for(int i=0; i<=4; i++){
        printf("enter the value at arr[%d]index: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=4; i++){
        printf("%d",arr[i]);
    }
}
