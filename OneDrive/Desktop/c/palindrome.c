#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int temp = n;
    int rem,rev=0;
    while (n!=0)
    {
        rem=n%10;
        rev=(rev*10)+(rem);
        n=n/10;
    }


    if (temp==rev)
    {
        printf("Palindrome");
    }else{
        printf("not Palindrome");
    }
    
    
    
}