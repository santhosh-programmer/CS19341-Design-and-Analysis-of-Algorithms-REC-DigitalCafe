// NOTE: This question can be solved using dynamic programming as well as using maths concepts. First code is based on math and the second is using dynamic programming.
// Both works and you can use any of these code.

// 1.USING MATH CONCEPT

#include<stdio.h>
long long int fact(int n,int m,int *max,int *min)
{
    long long int temp=1;
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
    long long int temp,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n/3;i++)
    {
        temp=fact(n-3*i,i,&max,&min);
        ans+=temp;
    }
    printf("%lld",ans+1);
}



// 2.USING DYNAMIC PROGRAMMING

#include<stdio.h>
long long int find(int n)
{
	long long int a[n+1];
	a[0]=a[1]=a[2]=1;
	for (int i=3;i<=n;i++)
		a[i]=a[i-1]+a[i-3];
	return a[n];
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld",find(n));
	return 0;
}
