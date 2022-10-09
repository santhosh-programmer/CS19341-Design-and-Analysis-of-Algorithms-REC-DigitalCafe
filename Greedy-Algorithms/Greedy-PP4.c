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
int power(int m)
{
    return (m==0)?1:3*power(m-1);
} 
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    for(int i=0;i<n;i++)
    ans=ans+(power(n-i-1)*a[i]);
    printf("%d",ans);
}
