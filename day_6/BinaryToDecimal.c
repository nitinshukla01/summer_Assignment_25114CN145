#include<stdio.h>
int main()
{
 long long binary , temp;
 int decimal = 0 , base = 1,reminder;
 printf("Enter binary number: ");
 scanf("%11d", &binary);
  
 temp = binary;

 while(temp >0)
 {

    reminder = temp % 10;
    decimal += reminder * base;
    temp /= 10; 
    base *= 2;

 }
  printf(" decimal of %11d: %d\n", binary , decimal);

    return 0;
}