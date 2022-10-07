// Given two arrays of positive integers, for each element in the second array, find the total number of elements in the first array 
// which are less than or equal to that element.  Store the values determined in an array.

// For example, if the first array is [1, 2, 3] and the second array is [2, 4], then there are 2 elements in the first array less than or equal to 2. 
// There are 3 elements in the first array which are less than or equal to 4. We can store these answers in an array, answer = [2, 3].


// Program Description

// The program must return an array of m positive integers, one for each maxes[i] representing the total number of 
// elements nums[j] satisfying nums[j] ≤ maxes[i] where 0 ≤ j < n and 0 ≤ i < m, in the given order.

// The program has the following:

// nums[nums[0],...nums[n-1]]:  first array of positive integers

// maxes[maxes[0],...maxes[n-1]]:  second array of positive integers

 

// Constraints

// ·       2 ≤ n, m ≤ 105

// ·       1 ≤ nums[j] ≤ 109, where 0 ≤ j < n.

// ·       1 ≤ maxes[i] ≤ 109, where 0 ≤ i < m.

 

// Input Format For Custom Testing

// Input from stdin will be processed as follows and passed to the program.

// The first line contains an integer n, the number of elements in nums.

// The next n lines each contain an integer describing nums[j] where 0 ≤ j < n.

// The next line contains an integer m, the number of elements in maxes.

// The next m lines each contain an integer describing maxes[i] where 0 ≤ i < m.

 

// Sample Case 0

// Sample Input 0

 

// 4

// 1

// 4

// 2

// 4

// 2

// 3

// 5

 
// Sample Output 0

// 2

// 4


// Explanation 0

// We are given n = 4, nums = [1, 4, 2, 4], m = 2, and maxes = [3, 5].

// 1.      For maxes[0] = 3, we have 2 elements in nums (nums[0] = 1 and nums[2] = 2) that are ≤ maxes[0].

// 2.      For maxes[1] = 5, we have 4 elements in nums (nums[0] = 1, nums[1] = 4, nums[2] = 2, and nums[3] = 4) that are ≤ maxes[1].

// Thus, the program returns the array [2, 4] as the answer.



#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int a1[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a1[i]);
    scanf("%d",&m);
    int a2[m];
    for(int i=0;i<m;i++)
    scanf("%d",&a2[i]);
    for(int i=0;i<m;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a2[i]>=a1[j])
            c++;
        }
        printf("%d\n",c);
    }
    
}

