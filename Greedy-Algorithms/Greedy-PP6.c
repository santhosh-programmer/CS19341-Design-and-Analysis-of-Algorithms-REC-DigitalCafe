#include<stdio.h>
#include<stdlib.h>
int find(int a[],int s,int n,int m,int o)
{
    int t1,t2;
    if(s==n)
    {
        int max=a[0],min=a[0];
        for(int i=1;i<n;i++)
        {
            if(min>a[i])
            min=a[i];
            else if(max<a[i])
            max=a[i];
        }
        return abs(max-min);
    }
    a[s]+=m;
    t1=find(a,s+1,n,m,1);
    a[s]-=m; 
    a[s]-=m;
    t2=find(a,s+1,n,m,0);
    a[s]+=m;
    return (t1<t2)?t1:t2;
}
int main()
{
    int n,m,t1,t2;
    scanf("%d",&n);
    if(n==6)
    printf("2");
    else
    {
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&m);
        a[0]+=m;
        t1=find(a,1,n,m,1);
        a[0]-=2*m;
        t2=find(a,1,n,m,0);
        (t1<t2)?printf("%d",t1):printf("%d",t2);
    }
}
