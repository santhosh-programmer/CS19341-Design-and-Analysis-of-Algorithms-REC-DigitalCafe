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




#include<stdio.h>
int n;
int find(int a[][n],int dp[][n],int i,int j)
{
    if(dp[i][j]!=0)
        return dp[i][j];
    if(i==0)
        return dp[i][j]=a[i][j]+find(a,dp,i,j-1);
    if(j==0)
        return dp[i][j]=a[i][j]+find(a,dp,i-1,j);
    int t1=a[i][j]+find(a,dp,i-1,j);
    int t2=a[i][j]+find(a,dp,i,j-1);
    if(t1>t2)
        dp[i][j]=t1;
    else
        dp[i][j]=t2;
    return dp[i][j];
}
int main()
{
    scanf("%d",&n);
    int a[n][n],dp[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            dp[i][j]=0;
        }
    }
    dp[0][0]=a[0][0];
    find(a,dp,n-1,n-1);
    printf("%d",dp[n-1][n-1]);
}
