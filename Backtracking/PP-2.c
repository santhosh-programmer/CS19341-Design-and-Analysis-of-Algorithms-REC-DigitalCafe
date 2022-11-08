// A proper coloring of a graph is an assignment of colors to the vertices of the graph so that no two adjacent vertices have the same color. Given an undirected graph and a number m, determine if the graph can be coloured with at most m colours such that no two adjacent vertices of the graph are colored with the same color. Here coloring of a graph means the assignment of colors to all vertices.

// Input:

// An integer V is the number of vertices in the graph.

// An integer m is the maximum number of colors that can be used.

// A 2D array graph[V][V] where V is the number of vertices in graph and graph[V][V] is an adjacency matrix representation of the graph. A value graph[i][j] is 1 if there is a direct edge from i to j, otherwise graph[i][j] is 0.

// Output:

// An array color[V] that should have numbers from 1 to m. color[i] should represent the color assigned to the ith vertex. The code should also return false if the graph cannot be colored with m colors.

// Input:

// 4
// 3
// 0 1 1 1
// 1 0 1 0
// 1 1 0 1
// 1 0 1 0

// Output:
// Assigned colors are: 1 2 3 2



#include<stdio.h>
int find(int n,int c,int a[n][n],int map[],int color[],int v,int p)
{
    if(v==n)
    return 1;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[p][i]==1 && map[i]==0)
            {
                for(int j=1;j<=c;j++)
                {
                    int f=0;
                    for(int k=0;k<n;k++)
                    {
                        if(a[i][k]==1 && color[k]==j)
                        {
                            f=1;
                            break;
                        }
                    }
                    if(f==0)
                    {
                        color[i]=j;
                        map[i]=1;
                        break;
                    }
                    if(j==c)
                    return 0;
                }
                return find(n,c,a,map,color,v+1,i);
            }
        }
    }
    return 0;
}
int main()
{
    int n,c;
    scanf("%d%d",&n,&c);
    int a[n][n],color[n],map[n];
    for(int i=0;i<n;i++)
    {
        color[i]=0;
        map[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    map[0]=1;
    color[0]=1;
    if(find(n,c,a,map,color,1,0))
    {
        printf("Assigned colors are: ");
        for(int i=0;i<n;i++)
        printf("%d ",color[i]);
    }
    else
    printf("No solution exists");
}
