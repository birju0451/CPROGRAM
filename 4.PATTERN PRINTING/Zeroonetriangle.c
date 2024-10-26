#include<stdio.h>
int main(){
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      int b=n;
      for(int j=1;j<=(n-i);j++){
        
          printf(" ");
        
      }
      for(int k=1;k<=b;k++){
        printf("* ");
      }
  
      printf("\n");
    }
    
    return 0;
}