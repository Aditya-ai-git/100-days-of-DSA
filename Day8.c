/*
Problem: Given integers a and b, compute a^b using recursion without using pow() function.

Input:
- Two space-separated integers a and b

Output:
- Print a raised to power b

Example:
Input:
2 5

Output:
32

Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32
*/
#include <stdio.h>
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return n*power(n,p-1);
    }
}
int main()
{
   int i,j;
   printf("Enter the number: ");
   scanf("%d",&i);
   printf("Enter the power: ");
   scanf("%d",&j);
   int f=power(i,j);
   printf("The final answer is: %d",f);
   return 0; 
}