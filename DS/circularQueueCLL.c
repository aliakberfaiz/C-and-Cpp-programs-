#include<stdio.h>
#include<conio.h>
typedef struct _nodeQueue
{
    int info;
    struct _nodeQueue *next;
}nodeQueue;
nodeQueue *front,*rear;
void enqueue(int data)
{
    nodeQueue *new1=(nodeQueue*)malloc(sizeof(nodeQueue));
    new1->info=data;
    if(front==NULL)
    {
    front=new1;
	new1->next=front;
	rear=new1;
	return;
    }
    else
    {
	new1->next=front;
	rear->next=new1;
	rear=new1;
	return;
    }

}
void dequeue ()
{
    nodeQueue *ptr=front;
if(front==NULL)
printf("\nUnderflow condition reached\n");
else
    {
    if(front->next==front)
    {
	free(front);
	front=NULL;
	rear=NULL;
	return;
    }
    else
    {
     front=front->next;
     free(ptr);
	}

}
}
void display()
{
    nodeQueue *ptr=front;
    printf("\nQueue is as follows --------:");
    while(ptr->next!=front)
    {
	printf("\n\t\t%d(%p) ",ptr->info,ptr);
	ptr = ptr->next;
    }
    printf("\n\t\t%d(%p) ",ptr->info,ptr);
    printf("\n");
    printf("front-->%p \t rear---->%p\t\trear--->next=%p\n",front,rear,rear->next);
}
int main()
{
    int d,data;
    while(1)
    {

	printf("Queue implementation using link list (structure) \nMenu---------------\n\t1.Enqueue\n\t2.Dequeue\n\t3.display\n\t4.exit\n");
	fflush(stdin);
	scanf("%d",&d);
	system("cls");//clrscr();
	switch(d)
	{

	    case 1:printf("\nEnter the number :");
	    fflush(stdin);
	    scanf("%d",&data);
	    enqueue(data);
	    getch();
	    break;
	    case 2:dequeue();
	    getch();
	    break;
	    case 3:
		display();
		getch();
		break;
	    case 4:
		return 0;
	}
    }
}
