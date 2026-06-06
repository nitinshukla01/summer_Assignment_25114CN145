#include<stdio.h>
int main()

{
 int decimal , temp;
 long long binary = 0;
 int reminder , place = 1;

  printf("Enter the number: ");
  scanf("%d",&decimal);
  temp = decimal;

  while(temp >0)
  {

    reminder = temp % 2;
    binary += reminder * place;
    temp /= 2;
    place *= 10;
  }
   printf("binary of %d: %11d\n", decimal , binary);


    return 0;
}