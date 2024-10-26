#include<stdio.h>
int main(){
    int n;
    printf("enter nuber of line:");
    scanf("%d",&n);
    int nsp=n;
    for(int i=0;i<=n;i++){
        for(int k=0;k<=nsp;k++){
            printf(" ");
        }
        int first=1;
        for(int j=0;j<=i;j++){
            printf("%d",first);
            if(j%2!=0) printf(" ");
            else printf(" ");
            first=first*(i-j)/(j+1);
        }
        nsp--;
        printf("\n");
    }
    return 0;
    }