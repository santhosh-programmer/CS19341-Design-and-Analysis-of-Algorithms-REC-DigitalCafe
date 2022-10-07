// Write a C program to find Whether the given integer is prime or not. 
  
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<n/2+1;i++)
    {
        if(n%i==0)
        {
            printf("No Prime");
            return 0;
        }
    }
    printf("Prime");
}
