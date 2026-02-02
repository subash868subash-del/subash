// Online C compiler to run C program online
#include <stdio.h>
void swap(int *a,int *b){
  int temp;
   temp=*a;
   *a=*b;
    *b=temp;
}

int main(){
  int x, y;
  printf("enter the numbers:\n");
  scanf("%d %d",&x, &y);
  
    //now swap operation
    printf("\nBefore swaping : \n");
    printf("x=%d,y=%d\n",x,y);
    //calling swap function
     swap(&x,&y);
    printf("After swaping : \n");
    printf("x=%d,y=%d",x,y);
    return 0;
}
