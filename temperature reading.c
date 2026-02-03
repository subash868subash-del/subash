#include<stdio.h>

int main(){
    int n=4;
    
    printf("Enter the  number of reading:%d\n",n);
    int temp[n];
    
    printf("Enter the readings:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&temp[i]);
    }
    printf("The temperature readings:\n");
    for(int i=0;i<n;i++){
        printf(" %d",temp[i]);
    }
    return 0;
}