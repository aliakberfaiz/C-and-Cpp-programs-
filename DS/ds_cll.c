#include<stdio.h>
#include<conio.h>
#ifndef NULL
#define NULL 0
#endif // NULL
struct cll
{
    int info;
    struct cll *next;
};
typedef struct cll node;
node *start;

void addNode(int data)
{
    // this function adds new nodes to cll
    node *ptr=start;
    node *prev;
node *new1=(node*)malloc(sizeof(node));

if(new1!=NULL)
{
    new1->info=data;
    new1->next=start;
    if(ptr==NULL)
    {
        start=new1;
        new1->next=start;
        return;
    }
    else
    {
        while(ptr->next!=start)
        {
            ptr=ptr->next;

        }ptr->next=new1;
    }
}
else
printf("No memory available\n");
}
void show(node *ptr)
{
//this function displays the cll
    printf("\nList is start--->");
while(ptr->next!=start)
{
printf("%d--->",ptr->info);
ptr=ptr->next;
}
printf("%d--->start\n",ptr->info);
}

int main()
{
    int data;
    char ch;
    printf("\n----------------------List--------------------------\n");
    do
    {
        fflush(stdout);
        printf("Enter new node value\n");
        fflush(stdin);
        scanf("%d",&data);
        addNode(data);
        printf("Do you want to continue adding nodes y or n ?");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y');

    show(start);
return 0;
}
