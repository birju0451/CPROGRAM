#include<stdio.h>
int stair(int n){
    if(n==1||n==2) return n;
    long long total_ways=stair(n-1)+stair(n-2);//int bhi use kar sakate hai
    return total_ways;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    stair(n);
    printf("maximum ways:%d",stair(n));
    return 0;
}