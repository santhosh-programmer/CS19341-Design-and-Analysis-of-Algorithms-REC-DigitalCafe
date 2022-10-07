#include<stdio.h>
int main()
{
    int n,bill,five=0,ten=0,twenty=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bill);
        if(bill==5)
        five++;
        else if(bill==10)
        {
            if(five>0)
            {
                five--;
                ten++;
            }
            else
            {
                printf("false");
                return 0;
            }
        }
        else
        {
            if(ten>0 && five>0)
            {
                five--; 
                ten--;
                twenty++;
            }
            else
            {
                printf("false");
                return 0;
            }
        }
    }
    printf("true");
}
