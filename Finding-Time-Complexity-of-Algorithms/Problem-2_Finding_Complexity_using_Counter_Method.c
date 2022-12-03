#include<stdio.h>
void function(int n,int *count)
{
    int i=1,s=1;
    (*count)+=2;
    while(s<=n)
    {
        i++;
        s+=i;
        (*count)+=3;
    }
    (*count)++;
}
int main()
{
    int n,count=0;
    scanf("%d",&n);
    function(n,&count);
    printf("%d",count);
}
