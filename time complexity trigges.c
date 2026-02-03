#include<stdio.h>

int main(){
    int triggers=0;
    
    for(int i=0; i<5; i++){
        triggers++;
    }
    printf("Total trigger = %d",triggers);
    return 0;
}