// Write a C program to find the biggest among the given 3 integers?

// For example:

// Input	      Result
// 10 20 30      30


#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d",a);
    else if(b>c)
    printf("%d",b);
    else
    printf("%d",c);
}
