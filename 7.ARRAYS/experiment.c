#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int i,j;
    int x=4, count=0;
    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if(arr[i]+arr[j]==x){
                count++;
            }
        }
      
    }
    printf("total count is:%d",count);
    return 0;
}