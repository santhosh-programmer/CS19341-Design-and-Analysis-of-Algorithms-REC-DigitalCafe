#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n/2;i++)
    {
        int c=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            c++;
        }
        if(c>=(n/2))
        {
            printf("%d",a[i]);
            return 0;
        }
    }
}
