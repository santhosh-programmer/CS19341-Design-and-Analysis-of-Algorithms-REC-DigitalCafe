#include<stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void permute(int a[], int l, int r,int arr[r+1][r+1],int *ans)
{
    int i;
    if (l == r)
    {
        int cost=0,t1;
        for(int i=0;i<=r;i++)
        {
            t1=a[i];
            cost+=arr[i][t1];
        }
        if(*ans>cost || *ans==0)
        *ans=cost;
    }
    else
    {
    	for (i = l; i <= r; i++)
    	{
    		swap((a+l), (a+i));
    		permute(a, l+1, r,arr,ans);
    		swap((a+l), (a+i));
    	}
    }
}
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    int a[n],arr[n][n];
    for(int i=0;i<n;i++)
    a[i]=i;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
    }
    permute(a,0,n-1,arr,&ans);
    printf("%d",ans);
}
