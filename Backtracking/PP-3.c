// Subset sum problem is to find subset of elements that are selected from a given set whose sum adds up to a given number K. Given a set of non-negative numbers and the value K, determine if there is a subset of numbers whose sum value is equal to K. It is assumed that the input set is unique (no duplicates are presented).

// Input:

// 1. An integer which is equal to the number of input non-negative integers.

// 2. An integer which is equal to sum value.

// 3. The set of non-negative integers

// Output:

// True/False

// Saying whether the subset exists or not.

// Example:

// Input:

// 6

// 9

// 3 34 4 12 5 2

// Output:

// True

#include<stdio.h>
int sum;
int find(int a[],int i,int n,int *ans)
{
    if(i==n)
    return ((*ans)==sum)?1:0;
    else
    {
        (*ans)+=a[i];
        if(find(a,i+1,n,ans))
        return 1;
        else
        {
            (*ans)-=a[i];
            if(find(a,i+1,n,ans))
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    scanf("%d",&sum);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    (find(a,0,n,&ans))?printf("True"):printf("False");
}
