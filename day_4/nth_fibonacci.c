#include<stdio.h>
int main()
{
 
int n , a = 0 ,b = 1,next , i;
printf("Enter the number:");
scanf("%d",&n);
for(i = 1;i<n;i++)
{
    next = a + b;
    a = b;
    b = next;

}
printf("nTH fibonacci term = %d",a);


return 0;
}