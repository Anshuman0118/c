#include<stdio.h>
int main(){
    
    int arr[5]={2,3,4,66,100};
    int max=arr[0];
    int smax=arr[0];
    for(int i=0;i<5;i++){
        if( max<arr[i]){
            max = arr[i];
        }

    }
    for (int i = 0; i < 5; i++)
    {
        if(smax<arr[i]&&max!=arr[i]){
            smax=arr[i];
        }
    }
    
    printf("%d ",smax);
}