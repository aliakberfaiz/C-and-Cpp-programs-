#include<stdio.h>
#include<conio.h>
#ifndef NULL
#define NULL 0
#endif // NULL
struct sll
{
    int info;
    struct sll *next;
};
typedef struct sll node;
node *start;

void addNode(int data)
{
node *new1=(node*)malloc(sizeof(node));
node *ptr=start;
if(new1!=NULL)
{
    new1->info=data;
    new1->next=NULL;
    if(ptr==NULL)
    {
        start=new1;
        return;
    }
    else
    {
        while(ptr->next)
            ptr=ptr->next;
        ptr->next=new1;
        return;
    }
}
else
printf("No memory available\n");
}
void show(node *ptr)
{
    //this functions shows us our list
    printf("List is start-->");
while(ptr)
{
printf("%d---->",ptr->info);
ptr=ptr->next;
}
printf("NULL");
}

int main()
{
    int data;
    char ch;
    do
    {
        fflush(stdout);
        printf("Enter new node value\n");
        fflush(stdin);
        scanf("%d",&data);
        addNode(data);
        printf("Do you want to add more nodes[y/n]? :");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y');
show(start);
return 0;
}
