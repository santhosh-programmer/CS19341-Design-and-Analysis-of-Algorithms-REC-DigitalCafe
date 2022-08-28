// he array-form of an integer num is an array representing its digits in left to right order.

// For example, for num = 1321, the array form is [1,3,2,1].
// Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

// Example 1:

// Input: num = [1,2,0,0], k = 34
// Output: [1,2,3,4]
// Explanation: 1200 + 34 = 1234
// Example 2:

// Input: num = [2,7,4], k = 181
// Output: [4,5,5]
// Explanation: 274 + 181 = 455
// Example 3:

// Input: num = [2,1,5], k = 806
// Output: [1,0,2,1]
// Explanation: 215 + 806 = 1021
// Example 4:

// Input: num = [9,9,9,9,9,9,9,9,9,9], k = 1
// Output: [1,0,0,0,0,0,0,0,0,0,0]
// Explanation: 9999999999 + 1 = 10000000000
// Constraints:

// 1 <= num.length <= 104
// 0 <= num[i] <= 9
// num does not contain any leading zeros except for the zero itself.
// 1 <= k <= 104

// For example:

// Input	      Result
//   4
// 1 2 0 0    1 2 3 4
//   34
  
//   3
// 2 7 4       4 5 5
//  181




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
