#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements of the array: ");
        scanf("%d ", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Max no. is %d", max);
}