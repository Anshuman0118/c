#include<stdio.h>
int main(){
    int a=23;
    float f=4.53;
    char ch='a';
    char *st="rahul";
    int d=123456;
    printf("Hello world\n");
    printf("value of a =%d\n",a);
    printf("value of float f = %f\n",f);
    printf("value of character ch=%c\n",ch);
    printf("value of char ch=%s\n",st);
    printf("value of char ch=%.3s\n",st);
    printf("value of char ch=%.2f\n",f);
    printf("value of d =%d\n",d);
    printf("value of d =%hd\n",d);//yha per isne sirf 2 bytes ka data uthaya jbki hmne ise 4 bytes ka data diya tha, because of %hd(short int consider kr liya isne ise yha)
    printf("value of d =%8d\n",a);
    printf("value of d =%.8d\n",a);
    printf("value of d =%-8d\n",a);
    printf("value of d =%08d\n",a);
    printf("%c\n",97);
    int x;
    int y;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("Enter the vlaue of y\n");
    scanf("%d",&y);
    int sum;
    sum=x+y;
    printf("sum = %d",sum);
}