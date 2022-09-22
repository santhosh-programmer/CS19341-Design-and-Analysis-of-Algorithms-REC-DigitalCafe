// The program must accept a positive integer N and print the digit in the tenth position.

// Input Format:

// The first line denotes the value of N.

// Output Format:

// The first line contains the value of N.

// Boundary Conditions:

// 10 <= N <= 9999999

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n/=10;
    printf("%d",n%10);
}
