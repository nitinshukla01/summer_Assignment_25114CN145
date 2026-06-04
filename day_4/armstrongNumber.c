#include<stdio.h>
int main(){
    int n,rev=0,d,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        rev=rev+d*d*d;
        n=n/10;
    }
    if(rev == temp)
    {
        printf("Number is armstrong");
    }
    else{
    printf("number is not armstrong");
    }
    return 0;
}