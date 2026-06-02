#include<stdio.h>
int main()
{
    int n,d,temp,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
    return 0;
}