// Given an array A of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[j] - A[i] = k, i != j.

// Input Format:

// First Line n - Number of elements in an array

// Next n Lines - N elements in the array

// k - Non - Negative Integer

// Output Format:
// 1 - If pair exists

// 0 - If no pair exists

// Explanation for the given Sample Testcase:

// YES as 5 - 1 = 4

// So Return 1.

// For example:

// Input	  Result
// 3         1
// 1 3 5
// 4


#include<stdio.h>
int find(int arr[],int k,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]-arr[i]==k && i!=j)
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],k;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    if(find(arr,k,n))
    printf("1");
    else
    printf("0");
}
