#include<stdio.h>
int main()
{
int i , num1 , num2 , gcd = 1;
printf("Enter first number: ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d",&num2);
for(i = 1;i<= num1&&i<=num2;i++)
{
    if(num1 %i == 0&& num2%i == 0)
    {
        gcd = i;
    }
}
printf("GCD is: %d\n",gcd);

    return 0;
}