{
    //storage allocation
    struct station *pr1=(struct station*) malloc(sizeof(struct station));
    struct station *pr2=(struct station*) malloc(sizeof(struct station));
    struct station *pr3=(struct station*) malloc(sizeof(struct station));
    //storing numbers
    strcpy(pr1->name , "A1");
    strcpy(pr2->name ,"B2");
    strcpy(pr3->name , "C3");
    //interconnection
    pr1->next = pr2;
    pr2->next = pr3;
    pr3->next = NULL;
    //POINTING head
    struct station *head =pr1;
    //display
    printf("Station: \n");
    while(head != NULL){
    printf("%s <-->", head->name);
    head = head->next;
}
printf("NULL");

    return 0;
}