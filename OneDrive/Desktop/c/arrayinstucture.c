#include<stdio.h>
struct student{
    int rollno;
    int marks[5];
};
int main(){
    int n;
    printf("Enter the number of students");
    scanf("%d",&n);
    struct student class[n];
    for(int i=0;i<n;i++){
        printf("enter roll no.");
        scanf("%d",&class[i].rollno);
        for(int j=0;j<5;j++){
        printf("enter marks of the subject %d",(j+1));    
        scanf("%d",&class[i].marks[j]);
        }
    }
}