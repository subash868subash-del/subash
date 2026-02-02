#include <stdio.h>
#include <stdlib.h>

struct contact{
    long int number;
    struct contact *next;
};
int  main(){
    struct contact *head, *temp, *newcontact;
    head = malloc(sizeof(struct contact));
    head->number = 9988776655;
    
    head->next=malloc(sizeof(struct contact));
    head->next->number=9888776655;
    
    head->next->next = malloc(sizeof(struct contact));
    head->next->next->number=9788445544;
    head->next->next->next=NULL;
    //inserting at middle order
    
    newcontact=malloc(sizeof(struct contact));
    newcontact->number=9645678903;
    
    temp=head;
    while(temp !=NULL && temp->number !=9833445566)
    temp=temp->next;
    
    if(temp !=NULL)
    newcontact->next = temp->next;
    temp->next = newcontact;
    //output
    temp=head;
    while(temp!=NULL){
        printf("%ld -->",temp->number);
        temp = temp->next;

    }
    printf("Finish\n");
    long int deletenumber=9645678903;
    temp=head;
    previous=NULL;
    while(temp!=NULL&&temp->number!=deletenumber)
    {
        previous=temp;
        temp=temp->next;
    }
    if(temp!=NULL){
      previous->next=temp->next;
      free(temp);
    }
    temp=head;
    while(temp!=NULL){
        printf("After deleting:");
        printf("%ld->",temp->number);
        temp=temp=temp->next;
    }
    printf("End");
    return 0;
}