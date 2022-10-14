#include<stdio.h>
unsigned long long int fact(int n,int m,int *max,int *min)
{
    unsigned long long int temp=1;
    if(n>m)
    {
        *max=n;
        *min=m;
    }
    else
    {
        *max=m;
        *min=n;
    }
    int arr[(*min)-2];
    for(int i=0;i<*min-1;i++)
    arr[i]=i+2;
    for(int i=n+m;i>*max;i--)
    {
        temp=temp*i;
        for(int j=0;j<=*min-2;j++)
        {
            if(temp%arr[j]==0)
            {
                temp=temp/arr[j];
                arr[j]=1;
            }
        }
    }
    return temp;
}
int main()
{
    int n,max,min;
    unsigned long long int temp,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n/3;i++)
    {
        temp=fact(n-3*i,i,&max,&min);
        ans+=temp;
    }
    printf("%lld",ans+1);
}
