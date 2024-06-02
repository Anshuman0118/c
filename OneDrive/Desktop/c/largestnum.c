#include<stdio.h>
int main(){
    int n;
    
    int arr[100];
    
    printf("Enter the number of elements n the array");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int max1 = arr[0];
    int max2 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max1<arr[i])
        {
            max2=max1;
            max1=arr[i];

        }
        else if(arr[i]<max2){
            max2=arr[i];
        }
        
            
        
    }
        printf("%d\n",max1);
        printf("%d",max2);   
    
        
        
    

    
    
}