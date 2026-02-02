#include <stdio.h>
#include<string.h>
struct structure{
    int rollno;
    int mark;
    char name[10];
};
int main() {
    struct structure stru1;
    struct structure sub1;
    struct structure sub2;
    struct structure sub3;
    stru1.rollno=12345;
    strcpy(stru1.name,"subash");
    sub1.mark=89;
    sub2.mark=88;
    sub3.mark=87;
    printf("The student name is:%s\n",stru1.name);
    printf("The student rollno:%d\n",stru1.rollno);
    printf("The student marks is\n");
    printf("tamil:%d\n",sub1.mark);
    printf("English:%d\n",sub2.mark);
    printf("maths:%d\n",sub3.mark);
    

    return 0;
}