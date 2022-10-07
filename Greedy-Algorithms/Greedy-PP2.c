#include<stdio.h>
void sort(int a[],int n)
{
    int t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
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
    int n,c,ans=0;
    scanf("%d",&n);
    int g[n];
    for(int i=0;i<n;i++)
    scanf("%d",&g[i]);
    scanf("%d",&c);
    int s[c];
    for(int i=0;i<c;i++)
    scanf("%d",&s[i]);
    sort(g,n);
    sort(s,c);
    for(int i=0;i<n;i++)
    {
        if(s[i] >= g[i])
        ans++;
    }
    printf("%d",ans);
}
