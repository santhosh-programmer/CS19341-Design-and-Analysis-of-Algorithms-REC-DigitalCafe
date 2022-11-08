// Playing with Chessboard:

// Ram is given with an n*n chessboard with each cell with a monetary value. Ram stands at the (0,0), that the position of the top left white rook. He is been given a task to reach the bottom right black rook position (n-1, n-1) constrained that he needs to reach the position by traveling the maximum monetary path under the condition that he can only travel one step right or one step down the board. Help ram to achieve it by providing an efficient DP algorithm.

// Example:
// Input
// 3
// 1 2 4
// 2 3 4
// 8 7 1
// Output:
// 19

// Explanation:
// Totally there will be 6 paths among that the optimal is
// Optimal path value:1+2+8+7+1=19

// Input Format
// First Line contains the integer n
// The next n lines contain the n*n chessboard values
 
// Output Format

// Print Maximum monetary value of the path




// BELOW CODE IS NOT ACTUALLY DONE BY DYNAMIC PROGRAMMING, IT IS A GREEDY TECHNIQUE
#include<stdio.h>
int ans=0;
void find(int n,int a[n+1][n+1],int i,int j,int temp)
{
    if(n==i && i==j)
    {
        if(temp>ans)
        ans=temp;
    }
    else
    {
        if(i+1<=n)
        find(n,a,i+1,j,temp+a[i+1][j]);
        if(j+1<=n)
        find(n,a,i,j+1,temp+a[i][j+1]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    find(n-1,a,0,0,a[0][0]);
    printf("%d",ans);
}
