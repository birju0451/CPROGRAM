#include<stdio.h>
int sumesion(int n){
    if(n==1||n==0) return 1;
    int sum=n+sumesion(n-1);
    return sum;
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int fact =sumesion(n);
    printf("sum n:%d",fact);
    return 0;
}