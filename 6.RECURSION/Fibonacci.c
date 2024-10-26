#include<stdio.h>
int fibonacci(int n){
    if(n==1||n==2) return 1;
    int fibNm1=fibonacci(n-1);
    int fibNm2=fibonacci(n-2);
    int fibN=fibNm1+fibNm2;
    return fibN;
}

int main(){
    int n;
    printf("enter fibonacci term");
    scanf("%d",&n);

    
    printf("fibonacci of nth term:%d",fibonacci(n));
    return 0;
}