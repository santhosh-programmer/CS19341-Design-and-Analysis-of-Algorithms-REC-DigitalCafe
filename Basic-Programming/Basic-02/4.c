// A letter (character) L is passed as the input. Based on the value of L, the program must print the following output.

// - If L is w or W, the program must print whatsapp
// - If L is t or T, the program must print twitter
// - If L is f or F, the program must print facebook
// - For any other value, the program must print undefined


// Input Format:

// The first line denotes the value of L. 

// Output Format:

// The first line contains the output value based on the given conditions.

#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='w'||c=='W')
    printf("whatsapp");
    else if(c=='f'||c=='F')
    printf("facebook");
    else if(c=='t'||c=='T')
    printf("twitter");
    else
    printf("undefined");
}
