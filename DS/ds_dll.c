#include<stdio.h>
#include<conio.h>
#ifndef NULL
#define NULL 0
#endif
struct dll
{
 int a;
 struct dll *prev;
 struct dll *next;
};
typedef struct dll node;
node *start;
void createNode(node *ptr,int data)
{
    //this  function creates new nodes to dll
    node *new1=(node*)malloc(sizeof(node));
    if(new1==NULL)
    {
        printf("No memory in the hash \n");
        return;
    }
    new1->a=data;
    new1->next=NULL;
    if(ptr==NULL)
    {
        new1->prev=NULL;
        new1->next=NULL;
        start=new1;
        return;
    }
    while(ptr->next)
    {
        ptr=ptr->next;
    }
    ptr->next=new1;
    new1->prev=ptr;
    return;
}
void showCll(node *ptr)
{
    //this function shows our cll
    while(ptr)
    {
        printf("\nprev--(%p)\t%d--address(%p)\tnext--(%p)\n",ptr->prev,ptr->a,ptr,ptr->next);
        ptr=ptr->next;
    }
}
void main()
{
    char ch;
    int n;
do
    {
        printf("Enter the node value  :");
        fflush(stdin);
        scanf("%d",&n);
        createNode(start,n);
        printf("Enter your choice[y/n]? :");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y');
    printf("\t\tThe list generated is:----------------- ");
showCll(start);
}


