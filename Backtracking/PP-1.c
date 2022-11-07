//  Hamiltonian Path in an undirected graph is a path that visits each vertex exactly once. A Hamiltonian cycle (or Hamiltonian circuit) is a Hamiltonian Path such that there is an edge (in the graph) from the last vertex to the first vertex of the Hamiltonian Path. Determine whether a given graph contains Hamiltonian Cycle or not. If it contains, then prints the path. Following are the input and output of the required function.

// Input:

// First the number of vertices in the graph V.

// Next
// A 2D array graph[V][V] where V is the number of vertices in graph and graph[V][V] is adjacency matrix representation of the graph. A value graph[i][j] is 1 if there is a direct edge from i to j, otherwise graph[i][j] is 0.

//  Output:

// An array path[V] that should contain the Hamiltonian Path. path[i] should represent the ith vertex in the Hamiltonian Path. The code should also return false if there is no Hamiltonian Cycle in the graph.
// For example, a Hamiltonian Cycle in the following graph is {0, 1, 2, 4, 3, 0}.

// (0)-----(1)-----(2)
//  |      / \      |

//  |    /      \   |

//  |   /         \ |
// (3)-------------(4)

// Input:

// 5
// 0 1 0 1 0
// 1 0 1 1 1
// 0 1 0 0 1
// 1 1 0 0 1
// 0 1 1 1 0

// Ouput:
// The hamiltonian cycle is 0 1 2 4 3 0




#include<stdio.h>
int find(int n,int a[n][n],int map[],int ans[],int p,int v)
{
    if(v==n)
    {
        if(a[p][0]==1)
        {
            ans[n]=0;
            printf("The hamiltonian cycle is ");
            for(int i=0;i<=n;i++)
            printf("%d ",ans[i]);
            return 1;
        }
        else
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[p][i]==1 && map[i]==0 )
            {
                ans[v]=i;
                map[i]=1;
                if(find(n,a,map,ans,i,v+1))
                return 1;
                else
                {
                    map[i]=0;
                    ans[v]=-1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int p=0,v=0,a[n][n],map[n],ans[n+1];
    for(int i=0;i<n;i++)
    map[i]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    map[0]=1;
    v++;
    ans[0]=0;
    if(!find(n,a,map,ans,p,v))
    printf("The hamiltonian cycle does not exist");
}
