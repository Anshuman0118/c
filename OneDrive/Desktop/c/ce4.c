#include<stdio.h>
#include<math.h>
int main(){
    int h,b,p;
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter p: ");
    scanf("%d",&p);
    h=sqrt(b*b)+(p*p);
    printf("Value of h is: %d",h);
    return 0;
}