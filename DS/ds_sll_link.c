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


void addNode(node **start,int data)
{
    //add a new node to any singly linked list.
 node *ptr=*start;
 node *new1=(node*)malloc(sizeof(node));

if(new1!=NULL)
{
    new1->info=data;
    new1->next=NULL;
    if(*start==NULL)
    {
        *start=new1;

    }
    else
    {
        while(ptr->next)
            ptr=ptr->next;
        ptr->next=new1;

    }
}
else
printf("No memory available\n");
}
void show(node *start)
{
    //shows our singly linked list.
node *ptr=start;
printf("\nList is start--->");
while(ptr)
{
printf("%d--->",ptr->info);
ptr=ptr->next;
}
printf("End\n");
}
void merge(node **start1,node **start2)
{
    //merges second parameter list to first.
    node *ptr=*start1;
    if(*start1==NULL)
    {
        *start1=*start2;

    }
    else
    {
        while(ptr->next)
            ptr=ptr->next;
        ptr->next=*start2;

    }
printf("\nBoth lists are now merged \n");
}
int main()
{
    int data;
    char ch;
    node *start1=NULL, *start2=NULL;
    printf("\n\nList one values\n");
    do
    {
        fflush(stdout);
        printf("Enter new node value\n");
        fflush(stdin);
        scanf("%d",&data);
        addNode(&start1,data);
        printf("Do you want to continue adding nodes y or n ?");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y');

    show(start1);

    printf("\n\nList two values\n");
    do
    {
        fflush(stdout);
        printf("Enter new node value\n");
        fflush(stdin);
        scanf("%d",&data);
        addNode(&start2,data);
        printf("Do you want to continue adding nodes y or n ?");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y');
    show(start2);

    printf("\n\nDo you want to merge both lists y or n?");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y')
    {
        merge(&start1,&start2);
        show(start1);
    }
return 0;
}
