#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    int i=0,j=4;
    while(i<=j){
        arr[i]==arr[j];
        i++;
        j--;
    }

    if(arr[i]==arr[j])
    printf("it is palindrom");
    else
    printf("it is not palindrom");

    return 0;
}