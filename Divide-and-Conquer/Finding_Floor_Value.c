#include<stdio.h>
int find(int a[],int k,int f,int m,int l)
{
    if(a[m]<k && a[m+1]>k)
    return a[m];
    else if (a[m+1]<k)
    return find(a,k,m+1,(m+l)/2,l);
    else
    return find(a,k,f,(f+m)/2,m);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    printf("%d",find(a,k,0,n/2,n));
}
