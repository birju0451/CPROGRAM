#include <stdio.h>
int main()
{
    int cp; // cost price.
    int sp; // selling price.
    printf("Enter cp and sp:\n");
    scanf("%d%d", &cp, &sp);
    if (cp < sp)
    {
        int p = sp - cp;
        printf("seller has pofite:%d\n", p);
    }
    else
    {
        int L = cp - sp;
        printf("seller has loss :%d\n", L);
    }
    return 0;
}