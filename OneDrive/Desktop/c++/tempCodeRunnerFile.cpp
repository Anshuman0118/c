#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cin>>n;
    for (int i = 2; i <= n; i++)
    {
        if(n%i==0){
            count=2;
        }


    }
    if(count==2){
        cout<<"number is prime";
    }else{
        cout<<"Number is composite";
    }
    
}