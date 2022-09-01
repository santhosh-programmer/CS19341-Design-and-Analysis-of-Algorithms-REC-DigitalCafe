// Write a C program to find whether the given integer is odd or even? 

// For example:

// Input	Result
// 12    Even
// 11    Odd

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    ((n|1)==n)?printf("Odd"):printf("Even");
}
