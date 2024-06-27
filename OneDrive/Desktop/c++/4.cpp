// #include<iostream>
// using namespace std;
// int main(){
//     int count=0;
//     int n;
//     cin>>n;
//     for (int i = 2; i <= n; i++)
//     {
//         if(n%i==0){
//             count=2;
//         }


//     }
//     if(count==2){
//         cout<<"number is prime";
//     }else{
//         cout<<"Number is composite";
//     }
    
// }
#include<iostream>
#include<cmath>
using namespace std;
int checkprime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
int main(){
 
    int x;
    cin>>x;
    for(int i=2;i<x;i++){
        if(checkprime(i)){
            cout<<i<<endl;
        }
  }
}