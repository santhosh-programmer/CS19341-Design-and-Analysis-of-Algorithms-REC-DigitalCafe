#include<stdio.h>
void function(int n,int *count)
{
    int c= 0;
    (*count)+=1;
    for(int i=n/2; i<n; i++)
    {
        (*count)+=1;
        for(int j=1; j<n; j = 2 * j)
        {
            (*count)+=1;
            for(int k=1; k<n; k = k * 2)
            {
                (*count)+=1;
                c++;
                (*count)+=1;
            }
            (*count)+=1;
        }
        (*count)+=1;
    }
    (*count)+=1;
}
int main()
{
    int n,count=0;
    scanf("%d",&n);
    function(n,&count);
    printf("%d",count);
}
