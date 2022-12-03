#include<stdio.h>
void reverse(int n,int *c)
{
   int rev = 0, remainder;
   (*c)+=2;
   while (n != 0) 
    {
        (*c)+=1;
        remainder = n % 10;
        (*c)+=1;
        rev = rev * 10 + remainder;
        (*c)+=1;
        n/= 10;
        (*c)+=1;
    }
    (*c)+=1;
    // print(rev);
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    reverse(n,&c);
    printf("%d",c);
}
