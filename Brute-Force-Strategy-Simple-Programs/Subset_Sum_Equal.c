// Given a non-empty array nums containing only positive integers, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

// Constraints:

// 1 <= n <= 200

// 1 <= nums[i] <= 100

// Example:

// Input:

// 4

// 1 5 11 5

// Output:

// true

// For example:

// Input	      Result
// 4           true
// 1 5 11 5
  
// 4           false
// 1 2 3 5


#include<stdio.h>
int sum=0;
int find(int a[],int *ans,int i,int n)
{
    if(i==n)
    return (((*ans)*2)==sum)?1:0;
    else
    {
        (*ans)+=a[i];
        if((*ans)*2==sum)
        return 1;
        if(find(a,ans,i+1,n))
        return 1;
        else
        {
            (*ans)-=a[i];
            if(find(a,ans,i+1,n))
            return 1;
        }
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],ans=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum%2!=0)
    printf("false");
    else
    (find(a,&ans,0,n))?printf("true"):printf("false");
}
