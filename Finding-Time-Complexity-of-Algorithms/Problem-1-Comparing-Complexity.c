#include<stdio.h>
int fn1(int a,int b,int count)
{
    for(int i=b;i>1;i--)
    {
        count++;
        if(a%i==0 && b%i==0)
        {
            printf("%d\n",i);
            break;
        }
    }
    return count;
}
int fn2(int a,int b,int count)
{
    int r=b;
    while(b>0)
    {
        r=a%b;
        a=b;
        b=r;
        count++;
    }
    printf("%d\n",a);
    return count;
}
int main()
{
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    int a1=fn1(a,b,count);
    int b1=fn2(a,b,count);
    printf("%d\n",a1);
    printf("%d\n",b1);
    (a1<b1)?printf("Function 1"):printf("Function 2");
}
