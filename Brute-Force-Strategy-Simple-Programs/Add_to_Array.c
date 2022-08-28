#include<stdio.h>
#include<stdlib.h>
struct node
{
    int e;
    struct node *next;
    struct node *prev;
};
typedef struct node node;
int main()
{
    int n,a;
    scanf("%d",&n);
    node *list=malloc(sizeof(node));
    list->next=NULL;
    node *position=list;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        node *newnode=malloc(sizeof(node));
        newnode->e=a;
        newnode->next=NULL;
        if(list->next==NULL)
        {
            list->next=newnode;
            newnode->prev=list;
            position=newnode;
        }
        else
        {
            newnode->prev=position;
            position->next=newnode;
            position=newnode;
        }
    }
    scanf("%d",&a);
    int temp,temp1;
    while(a>0)
    {
        temp=a%10;
        node *tp=position;
        temp1=tp->e +temp;
        while(temp1>9)
        {
            if(tp->prev==list)
            {
                node *newnode=malloc(sizeof(node));
                newnode->next=list->next;
                newnode->prev=list;
                list->next=newnode;
                newnode->e=1;
            }
            tp->e= (temp1)%10;
            temp1=tp->prev->e +temp1/10;
            tp=tp->prev;
        }
        tp->e=temp1;
        a/=10;
        position=position->prev;
    }
    node *pos=list->next;
    while(pos!=NULL)
    {
        printf("%d ",pos->e);
        pos=pos->next;
    }
}
