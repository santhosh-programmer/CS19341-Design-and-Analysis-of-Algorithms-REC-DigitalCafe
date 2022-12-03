#include<stdio.h>
int Factor(int num,int c) 
{
    for (int i = 1; i <= num;++i)
    {
        c+=2;
        if (num % i== 0)
        {
            // printf("%d ", i);
        }
    }
    c+=2;
    return c;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    printf("%d",Factor(n,c));
}
