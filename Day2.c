/*
Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left*/
#include <stdio.h>
int main()
{
    int n,i,pos,x;
    printf("Enter the length of an array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of integer you want to delete ");
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    ;
    printf("Output:\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}