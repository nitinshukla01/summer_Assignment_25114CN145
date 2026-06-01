#include<stdio.h>
int main()
{
 int n,i,count=0;
 printf("Enter the number: ");
 scanf("%d",&n);
 while(n>0)
 {
    n=n/10;
    count = count + 1;

 }
 printf("total number is = %d",count);



    return 0;
}