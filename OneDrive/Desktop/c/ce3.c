#include<stdio.h>
#include<math.h>
int main(){
    int t,a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    t=(2*a)+sqrt(b)+9*c;
    printf("value of t is: %d",t);
    return 0;
}