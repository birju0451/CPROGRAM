#include<stdio.h>
int main(){
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    int a=64;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           if(i%2!=0){
            printf("%d ",j);
           }
           else{
            int t=a+j;
            char ch=(char)t;
            printf("%c ",ch);
           }
            
        }
        printf("\n");
    }
    
    return 0;
}