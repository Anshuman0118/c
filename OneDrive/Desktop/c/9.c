#include <stdio.h>
int main()
{
    int i;
    int marks[10]={95,90,88,70,44,33,12,15,100,20};
    for (int i = 0; i < 10; i++)
        
    {
        if (marks[i] < 40)
        {
            printf("%d\n", marks[i]);
        }
    }
}