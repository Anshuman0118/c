#include<stdio.h>
int main(){
    int s,u,t,a;
    printf("Enter u: ");
    scanf("%d",&u);
    printf("Enter t: ");
    scanf("%d",&t);
    printf("Enter a: ");
    scanf("%d",&a);
    s=(u*t)+(0.5*a*(t*t));
    printf("the value of s is: %d",s);
    return 0;
}