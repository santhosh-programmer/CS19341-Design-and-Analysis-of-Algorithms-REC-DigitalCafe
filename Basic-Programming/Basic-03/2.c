// There is a school with 100 students, and correspondingly 100 lockers, all of which start off closed. The first student opens every locker. The second student closes every other locker, starting with the second (2, 4, 6 etc.). The third student changes the state of every third locker starting with the third (3, 6, 9 etc.). The fourth would change the status of lockers numbered 4, 8, 12 etc. That is, if the locker is open, it is closed, and if it is closed, it is opened. This continues until all 100 students have passed along the lockers. After the 100th student is done, which lockers are open and which are closed?

//  [Note: program should work for any number of students/lockers]

//  Sample Input 1

// 100

// Sample Output 1

// open = 10

// close = 90



#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i*i<=n;i++)
    c++;
    printf("open = %d\nclose = %d",c,n-c);
}
