// Write a C program to find the biggest among the given 3 integers?

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?printf("%d",a):(b>c)?printf("%d",b):printf("%d",c);
}
