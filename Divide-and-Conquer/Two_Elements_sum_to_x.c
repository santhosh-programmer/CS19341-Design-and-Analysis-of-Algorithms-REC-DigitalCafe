#include<stdio.h>
int find(int a[],int key,int f,int m,int l)
{
    if(a[m]==key)
    return key;
    else if(f==l)
    return 0;
    else if(a[m]<key)
    return find(a,key,m+1,(m+1+l)/2,l);
    else
    return find(a,key,f,(f+m-1)/2,m-1);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    if(a[n-1]+a[n-2]<k)
    goto x;
    for(int i=0;i<n-1;i++)
    {
        if(!(k-a[i]>a[n-1]))
        {
            int ans=find(a,k-a[i],i+1,(i+n)/2,n-1);
            if(ans)
            {
                printf("%d\n%d",a[i],ans);
                return 0;
            }
        }
    }
    x:printf("No");
}
