// You are given a sequence of integers as input, terminated by a -1. (That is, the input integers may be positive, negative or 0. A -1 in the input signals the end of the input.)

// -1 is not considered as part of the input.

// Find the second largest number in the input. You may not use arrays.

// Sample Test Cases

// Test Case 1

// Input

// -840 -288 -261 -337 -335 488 -1

// Output

// -261

#include<stdio.h>
#include<limits.h>
int main()
{
    int n,fl,sl;
    fl=sl=INT_MIN;
    do{
        scanf("%d",&n);
        if(n>fl && n!=-1)
        {
            sl=fl;
            fl=n;
        }
        else if(n>sl && n!=-1)
        sl=n;
    }while(n!=-1);
    printf("%d",sl);
}
