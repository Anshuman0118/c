#include<stdio.h>
int main(){
    int n;
    int arr[100];
    int sum=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    
    printf("%d\n",sum);
    int temp = n;
    int rem,rev=0;
    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(temp==rev){
        printf("Palindrome");

    }
    else{
        printf("/nNot Palindrome");
    }

    

}