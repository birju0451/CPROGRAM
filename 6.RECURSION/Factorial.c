#include<stdio.h>
int factorial(int n){
    if(n==1||n==0) return 1;
    int fact=n*factorial(n-1);
    return fact;
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int fact =factorial(n);
    printf("factorial n:%d",fact);
    return 0;
}