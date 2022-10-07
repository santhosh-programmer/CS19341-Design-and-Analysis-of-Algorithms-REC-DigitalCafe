#include<stdio.h>
int main()
{
    int n,ans=0,i=0;
    int a[]={1000,500,100,50,20,10,5,2,1};
    scanf("%d",&n);
    while(n>0)
    {
        if(a[i]<=n)
        {
            n-=a[i];
            ans++;
        }
        else
        i++;
    }
    printf("%d",ans);
}
