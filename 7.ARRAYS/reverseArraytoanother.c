#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5];
    int i,j;
   
    for(int i=0;i<=4;i++)
    {
        for(int j=i;j<=i;j++)
        {
           brr[j]=arr[i];
           printf("brr[%d] is:%d\n",i,brr[i]);

        }
      
    }

    return 0;
}