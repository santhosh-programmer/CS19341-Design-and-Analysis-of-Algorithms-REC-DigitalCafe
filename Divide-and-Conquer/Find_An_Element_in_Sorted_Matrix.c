#include<stdio.h>
int find(int i,int r[],int k,int f,int m,int l,int n,int a[][n])
{
    if (r[l]<k)
    return find(i+1,a[i+1],k,f,m,l,n,a);
    else if(r[m]==k)
    return 1;
    else if (f==l)
    return 0;
    else if(r[m]<k)
    return find(i,r,k,m+1,(m+l+1)/2,l,n,a);
    else 
    return find(i,r,k,f,(f+m)/2,m-1,n,a);
}
int main()
{
    int n,k,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    scanf("%d",&k);
    if(find(0,a[0],k,0,n/2,n-1,n,a))
    printf("FOUND");
    else
    printf("NOT FOUND");
}
