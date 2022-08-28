#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&b);
    int brr[b];
    for(int i=0;i<b;i++)
    scanf("%d",&brr[i]);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr[i]==brr[j])
            {
                printf("%d ",arr[i]);
                break;                
            }
        }
    }
}
