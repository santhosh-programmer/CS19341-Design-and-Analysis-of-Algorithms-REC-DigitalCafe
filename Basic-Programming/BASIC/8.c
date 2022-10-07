// Write a C program to find the power of integers.  

#include<stdio.h>
int power(int a,int b)
{
    if(b==0)
    return 1;
    else
    return a*power(a,b-1);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));
}
