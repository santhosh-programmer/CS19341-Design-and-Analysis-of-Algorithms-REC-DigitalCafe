// Write a C program to find the power of integers.  

// input:

// a b

// output:

// a^b value

// For example:

// Input	 Result
// 2       32
// 5


#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
    int ans=n;
    for(int i=1;i<p;i++)
    ans=ans*n;
    printf("%d",ans);
}
