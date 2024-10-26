#include<stdio.h>
int main(){
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    int m=n-1;
   int nst=m;
   int nsp=1;
   int a=4;
    for(int i=1;i<=2*n-1;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i=1;i<=m;i++){//line
        for(int j=1;j<=nst;j++){
        printf("%d ",j);
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
         for(int j=1;j<=nst;j++){
            int b=j+a;
        printf("%d ",b);
        }
        a++;
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}