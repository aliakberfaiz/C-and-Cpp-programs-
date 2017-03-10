#include<stdio.h>
#include<conio.h>
#ifdef _OR
#define _OR ||
#endif // _OR
#ifndef NULL
#define NULL 0
#endif
typedef struct _nodeSLL
{
    int data;
    struct _nodeSLL *next;
    //this is a simple node
}NodeSll;
typedef struct _linkedlist
{
    NodeSll *head;
    NodeSll *tail;
    NodeSll *current;
    // this is a list register containing head and tail list element pointer address.
}linkedList;
void createList(linkedList *list)
{
    list->head=NULL;
    list->tail=NULL;
    list->current=NULL;
    //starts the list with NULL values so that it behaves well.
}
void createHead(linkedList *list,int data)
{
    //creates the head node or add a node at head position in list
    NodeSll *new1=(NodeSll*)malloc(sizeof(NodeSll));
     new1->data=data;
    if(list->head==NULL)
    {
        new1->next=NULL;;
        list->head=new1;
        list->tail=new1;
    }
    else
    {
        new1->next=list->head;
        list->head=new1;
    }

}
void addTail(linkedList *list,int data )
{
    //adds a node on the backside of the list
    NodeSll *new1=(NodeSll*)malloc(sizeof(NodeSll));
    new1->data=data;
    new1->next=NULL;
    list->tail->next=new1;
    list->tail=new1;
}
void showList(linkedList *list)
{
    list->current=list->head;
    printf("Head---->");
    while(list->current)
    {
        printf("%d---->",list->current->data);
        list->current=list->current->next;
    }
    printf("Tail.\n");
    list->current=NULL;
    getch();

}
void listOperations(linkedList *list)
{
    int data;
    createList(list);

    while(1)
    {
    system("cls");
    printf("\n\t----------------Linked Lists Program------------------------\n");
    printf("\nPress 1. for adding head node.\nPress 2. for addding tail node.\nPress 3. for showing the list.\nPress 4. for exit\n");
    fflush(stdin);
    switch(getchar())
    {
        case '1':
                    printf("Enter the value you want to add (headnode):");
                    fflush(stdin);
                    scanf("%d",&data);
                    createHead(list,data);
                    break;
        case '2':
            printf("Enter the value you want to add (node):");
            fflush(stdin);
            scanf("%d",&data);
            addTail(list,data);
        break;
        case '3':showList(list);
        break;
        case '4':return;
        default: printf("\n You did a wrong choice");
        getch();
    }
    }
}
int main()
{
    // implementing the sll
    linkedList list;
    listOperations(&list);
        return 0;
}
