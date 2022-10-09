#include<stdio.h>
int main()
{
    int n,s,min,max;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&s);
    min=a[0];
    max=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
        else if(max<a[i])
        max=a[i];
    }
    min+=s;
    max-=s;
    (max-min<0)?printf("%d",-1*(max-min)):printf("%d",max-min);
}
