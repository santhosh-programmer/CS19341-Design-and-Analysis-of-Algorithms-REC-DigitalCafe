// Given n complex products, each with name, price and weight, find out how many duplicates of the original product are present within the products. Here, a duplicate is a product with all parameters, i.e. name, price and weight, equal to some other product.

// Complete the code in the editor below. The program has to return a single integer denoting the number of duplicates within the products. 

// It has the following:

//     names: string array of size n, where namesi denotes the name of the ith product

//     prices: int array of size n, where pricesi denotes the price of the ith product

//     weights: int array of size n, where weightsi denotes the weight of the ith product

// Constraints

// ·       1 ≤ n ≤ 105

// ·       namesi is non-empty, has at most 10 characters, and all its characters are lowercase english letters

// ·       1 ≤ pricesi, weightsi ≤ 1000

// Input Format Format for Custom Testing

// Input from stdin will be processed as follows and passed to the function:




// In the first line, there is a single integer n.

// Then, n lines follow. In the ith of them, there is a single string namesi

// In the next line, there is a single integer n.

// Then, n lines follow. In the ith of them, there is a single integer pricesi

// In the next line, there is a single integer n.

// Then, n lines follow. In the ith of them, there is a single integer weightsi

 

// Sample Case 0

// Sample Input

 

// 5

// ball

// box

// ball

// ball

// box

// 5

// 2

// 2

// 2

// 2

// 2

// 5

// 1

// 2

// 1

// 1

// 3

// Sample Output
// 2

// Explanation
// There are 5 products. All 3 balls are the same because they have same names, prices, and weights, so they contribute 2 duplicates. 
// Two other products are boxes, and they are different because they have different weights.


#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char name[n][10];
    int p[n],w[n],c=0;
    for(int i=0;i<n;i++)
    scanf("%s",name[i]);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&w[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((strcmp(name[i],name[j])==0) && (p[i]==p[j]) && (w[i]==w[j]))   
            {
                c++;
                break;
            }
        }
    }
    printf("%d",c);
}


