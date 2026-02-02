#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct history{
    int name;
    struct history *next;//nested structure
};
int main(){
    //storage allocation
    struct history *pr1=(struct history*) malloc(sizeof(struct history));
    struct history *pr2=(struct history*) malloc(sizeof(struct history));
    struct history *pr3=(struct history*) malloc(sizeof(struct history));
    //storing numbers
    pr1->name = 101;
    pr2->name = 102;
    pr3->name = 103;
    //interconnection
    pr1->next = pr2;
    pr2->next = pr3;
    pr3->next = NULL;
    //POINTING head
    struct history *head =pr1;
    //deletion part
    struct history *temp = head;
    struct history *prev = NULL;

    while(temp != NULL){
        if(temp->name == 102){
            prev->next = temp->next; // skip 102
            free(temp);              // delete node
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    //display
    printf("history: \n");
    temp=head;
    while(temp != NULL){
    printf("%d <-->", temp->name);
    temp = temp->next;
}
printf("NULL");

    return 0;
}