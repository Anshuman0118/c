#include<stdio.h>
int main(){
    int v,u,a,t;
    printf("Entyer u: ");
    scanf("%d",&u);
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter t: ");
    scanf("%d",&t);
    v = u+a*t;
    printf("v=%d",v);
    return 0;
}