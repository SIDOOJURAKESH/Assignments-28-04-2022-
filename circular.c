#include<stdio.h>
#include<stdlib.h>
typedef struct single
{
    char data;
    struct single *next;
}stu;
stu *head=0,*new =0,*latest=0;
void createnode(char data1)
{
    new = (stu *)malloc(sizeof(stu));
    new->data=data1;
    new->next = head;
    if(head==0)
        head=new;
    else
        latest->next=new;
    latest=new;
}
void traverse()
{
    stu *t = head;
    while(t->next!=head)
    {
        printf("Vowel : %c\n",t->data);
        t=t->next;
    }
    printf("Vowel : %c\n",t->data);
}
int main()
{
      createnode('a');
      createnode('e');
      createnode('i');
      createnode('o');
      createnode('u');
      traverse();
   return 0;
}