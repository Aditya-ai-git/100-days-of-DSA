/*
Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70
*/
#include <stdio.h>
int main()
{
    int i,j,p,q,temp;
    printf("Enter the number of entries in server log 1: ");
    scanf("%d",&p);
    int server1[p];
    printf("\nEnter %d sorted integers representing arrival times from server 1\n",p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&server1[i]);
    }
    printf("Enter the number of entries in server log 2: ");
    scanf("%d",&q);
    int server2[q];
    printf("\nEnter %d sorted integers representing arrival times from server 1\n",q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&server2[i]);
    }
    int r=p+q;
    int final[r];
    for(i=0;i<p;i++)
    {
        final[i]=server1[i];
    }
    for(i=0;i<q;i++)
    {
        final[p+i]=server2[i];
    }
    for(i=0;i<r-1;i++)
    {
        for(j=0;j<r-i-1;j++)
        {
            if(final[j]>final[j+1])
            {
                temp=final[j];
                final[j]=final[j+1];
                final[j+1]=temp;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        printf("%d ",final[i]);
    }
    return 0;
}