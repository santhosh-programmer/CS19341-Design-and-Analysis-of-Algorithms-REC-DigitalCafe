// Three numbers form a Pythagorean triple if the sum of squares of two numbers is equal to the square of the third.

// For example, 3, 5 and 4 form a Pythagorean triple, since 3*3 + 4*4 = 25 = 5*5

// You are given three integers, a, b, and c. They need not be given in increasing order. If they form a Pythagorean triple, then print "yes", otherwise, print "no". Please note that the output message is in small letters.


#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b,c;
    bool ans;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    ans=(b*b +c*c ==a*a);
    else if(b>a && b>c)
    ans=(a*a +c*c ==b*b);
    else
    ans=(a*a+b*b==c*c);
    if(ans)
    printf("yes");
    else
    printf("no");
}
