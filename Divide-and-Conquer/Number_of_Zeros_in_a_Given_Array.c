// METHOD 1 : WITHOUT DIVIDE AND CONQUER

#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            printf("%d",n-i);
            return 0;
        }
    }
    printf("0");
}



// METHOD 2 : WITH DIVIDE AND CONQUER

#include<stdio.h>
int find(int a[],int f,int l,int m)
{
    if(a[f]==0)
    return f;
    else if (f==l)
    return -1;
    else if (a[m]==1)
    return find(a,m+1,l,(m+l)/2);
    else
    return find(a,f,m,(f+m)/2);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int ans=find(a,0,n-1,n/2);
    printf("%d",(ans==-1)?0:n-ans);
}
