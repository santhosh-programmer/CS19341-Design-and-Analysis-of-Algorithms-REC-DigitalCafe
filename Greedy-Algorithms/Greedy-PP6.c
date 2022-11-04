#include<stdio.h>
int find(int a[],int s,int n,int m)
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
    t1=find(a,s+1,n,m);
    a[s]-=m; 
    a[s]-=m;
    if(!(a[s]<0))
    t2=find(a,s+1,n,m);
    else
    t2=t1;
    a[s]+=m;
    return (t1<t2)?t1:t2;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    printf("%d",find(a,0,n,m));
}
