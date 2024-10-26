#include <stdio.h>
int main()
{
    int n=12345;
    int sum=0;
    while(n>0)
    {
        int ld=n%10;
        if (ld%2!=0)
        {
            continue;
        }
        sum=sum+ld;
        n=n/10;
    }
    printf("sum of total even digit of a number:%d", sum);

    return 0;
}