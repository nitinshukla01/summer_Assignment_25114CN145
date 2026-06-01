#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Enter only positive number");
        return 0;
    }
    if(n==0)
    {
        printf("the factorial is = %d",fact);
    }
    for(i=2;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("The factorial is = %d",fact);
 
    return 0;
}