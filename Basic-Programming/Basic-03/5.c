// Write a program to find if a given number N can be expressed as a sum of two prime numbers.

// Note: YOU MUST OPTIMIZE the logic to find whether a number is prime or not, as very large prime numbers are provided as input. If the logic is not optimized your program will NOT get executed within the given time limit.

// Input Format:

// First line contains total number of test cases, denoted by T.

// Next T lines will contain the value of N for each test case.

// Output Format:

// T lines containing either yes or no.

// Boundary Conditions / Constraints:

// 1 <= T <= 25

// 3 <= N <= 10^9

// Example Input/Output 1:

// Input:

// 5

// 20

// 12

// 23

// 34

// 16

 

// Output:


// yes

// yes

// no

// yes

// yes


// Explanation:

 
// 20 can be expressed as 17+3

// 12 can be expressed as 7+5

// 23 cannot be expressed as sum of two primes

// 34 can be expressed as 31+3 or 11+23 or 17+17

// 16 can be expressed as 11+5



#include<stdio.h>
#include<math.h>
int prime(int e)
{
    for(int i=2;i<e;i++)
    {
        if(e%i==0)
        return 0;
    }
    return 1;
}
int find(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(prime(i))
        {
            if(prime(n-i))
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int n,m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&n);
        (find(n)==1)?printf("yes\n"):printf("no\n");
    }
}
