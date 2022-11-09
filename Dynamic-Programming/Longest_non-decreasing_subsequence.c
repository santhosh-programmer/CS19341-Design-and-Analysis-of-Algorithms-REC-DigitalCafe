// Problem statement:

// Find the length of the Longest Non-decreasing Subsequence in a given Sequence.

// Eg:

// Input:9

// Sequence:[-1,3,4,5,2,2,2,2,3]

// the subsequence is [-1,2,2,2,2,3]

// Output:6



// NOTE: This code is not based on Dynamic programming, it's just normal execution.
#include<stdio.h>
int find(int n,int a[])
{
    int ans=0;
    {
        for(int i=0;i<n;i++)
        {
            if(ans>n-i)
            return ans;
            else
            {
                int l=i,r=n-1,t=1;
                while(l<r)
                {
                    
                    if(a[l]<=a[r] && (l==i || a[l]>=a[l-1]) )
                    {
                        if(a[r]>=a[r-1])                     
                        r--;
                        else
                        l++;
                        t++;
                    }
                    else if(a[l+1]>=a[l])
                    {
                        l++;
                        r++;
                    }
                    else
                    break;
                }
                if(ans<t)
                ans=t;
            }
        }
        return ans;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",find(n,a));
}
