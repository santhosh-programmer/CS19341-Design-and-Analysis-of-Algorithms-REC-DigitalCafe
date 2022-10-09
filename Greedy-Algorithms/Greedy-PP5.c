#include<stdio.h>
void sort(int a[],int n)
{
    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int main()
{
    int n,gift,min=0,max=0,temp=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&gift);
    sort(a,n);
    for(int i=0;i<n-(gift*temp);i++)
    {
        temp++;
        min+=a[i];
    }
    temp=0;
    for(int i=n-1;i>=(gift*temp);i--)
    {
        temp++;
        max+=a[i];
    }
    printf("%d\n%d",min,max);
}
