#include"alldirectories.h"
struct tree_node
{
int data;
struct tree_node *lchild;
struct tree_node *rchild;
};
typedef struct tree_node bt_node;
bt_node *start;
int create_btnode(bt_node *ptr,int data)
{
    bt_node *new1=(bt_node *)malloc(sizeof (bt_node));
    bt_node *prev;
    if(new1==NULL)
    {
        puts("Cannot allocate memory stack full .");
        return -1;
    }
    new1->data=data;
    new1->rchild=NULL;
    new1->lchild=NULL;
    if(start==NULL)
    {
        start=new1;
        return 0;
    }
    while(ptr!=NULL)
    {
        if(data>ptr->data)
        {
            prev=ptr;
            ptr=ptr->rchild;
            //printf("rchild was inserted\n");
            continue;
        }
        else
          {
            //printf("Lchild was inserted\n");
             prev=ptr;
             ptr=ptr->lchild;
             continue;
          }

    }
     if(data>prev->data)
            prev->rchild=new1;
        else
            prev->lchild=new1;
          return 0;
}
void display_btnodes(bt_node *ptr)
{
    if(ptr!=NULL)
    {
        display_btnodes(ptr->lchild);
        printf("{%p,%d(%p),%p}\n",ptr->lchild,ptr->data,ptr,ptr->rchild);
        display_btnodes(ptr->rchild);
    }
}
int main()
{
   char ch;
    int n;
    do
    {
    puts("Enter the value of node\n");
    scanf("%d",&n);
    create_btnode(start,n);
    if(!n)
    puts("Successfully Entered a node ");
    printf("Do you want to continue\n");
    fflush(stdin);
    scanf("%c",&ch);
    }while(ch=='y');
    display_btnodes(start);
    puts("Thank you \n");
    return 0;
}
