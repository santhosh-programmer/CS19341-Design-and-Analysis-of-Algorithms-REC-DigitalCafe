#include<stdio.h>
void func(int n,int *c)
{
    if(n==1)
    {
        //printf("");
        (*c)+=2;
    }
    else
    {
        (*c)+=1;
        for(int i=1;i<=n;i++)
        {
            (*c)+=1;
            for(int j=1;j<=n;j++)
            {
                (*c)+=3;
                //printf("");
                //printf("");
                break;
            }
            (*c)+=1;
        }
        (*c)+=1;
    }
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    func(n,&c);
    printf("%d",c);
}
