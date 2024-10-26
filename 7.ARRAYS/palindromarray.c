#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    int brr[5];
    int i,j;
   
    for(int i=0;i<=2;i++)
    {
        for(int j=4;j<=2;j--)
        {
           if(arr[i]==brr[j]) printf("it is pelindrom");
           else printf("it is not pelindrom");
        }
      
    }
    //printf("total count is:%d",count);
    return 0;
}