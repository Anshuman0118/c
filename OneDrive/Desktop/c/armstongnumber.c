#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d\n", sum);

    int temp = sum;
    int rem, rev = 0;
    while (sum!= 0)
    {
        rem = sum % 10;
        rev = rev + (rem * rem * rem);
        sum = sum / 10;
    }

    if (temp == rev)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
}