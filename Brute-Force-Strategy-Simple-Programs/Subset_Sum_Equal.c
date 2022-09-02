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
int main()
{
    int n,sum,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    if(sum%2==0)
    printf("true");
    else
    printf("false");
}
