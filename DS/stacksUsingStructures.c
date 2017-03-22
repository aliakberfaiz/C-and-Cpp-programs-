#include<stdio.h>
#include<conio.h>
typedef struct _nodeStack
{
    int info;
    struct _nodeStack *next;
}nodeStack;
nodeStack *start;
void push(int data)
{
    nodeStack *new1=(nodeStack*)malloc(sizeof(nodeStack));
    nodeStack *ptr=start;
    new1->next=NULL;
    new1->info=data;
    if(start==NULL)
    {
        start=new1;
        return;
    }
    else
    {
        while(ptr->next)
        {
            ptr = ptr->next;
        }
         ptr->next =new1;
        return;
    }

}
void pop ()
{
    nodeStack *ptr=start,*prev;
if(start==NULL)
printf("\nUnderflow condition reached\n");
else
    {
    if(start->next==NULL)
    {
        free(start);
        start=NULL;
        return;
    }
    else
    {
     while(ptr->next)
     {
         prev=ptr;
         ptr=ptr->next;
     }
     free(ptr);
     prev->next=NULL;
     }
        }

}

void display()
{
    nodeStack *ptr=start;
    printf("\nStacks is as follows --------:");
    while(ptr)
    {
        printf("%d ",ptr->info);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    int d,data;
    while(1)
    {

        printf("Stacks implementation using link list (structure) \nMenu---------------\n1.push\n2.pop\n3.display\n4.exit\n");
        fflush(stdin);
        scanf("%d",&d);
        system("cls");
        switch(d)
        {
            //clrscr();
            case 1:printf("\nEnter the number :");
            fflush(stdin);
            scanf("%d",&data);
            push(data);
            break;
            case 2:pop();
            break;
            case 3:
                display();
                break;
            case 4:
                return 0;
        }
    }
}
