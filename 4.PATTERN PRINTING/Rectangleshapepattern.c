#include<stdio.h>
int main(){
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    int number=0;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            number=number+1;
            printf("%d ",number);
        }
        printf("\n");
        number=0;
    }

    return 0;
}