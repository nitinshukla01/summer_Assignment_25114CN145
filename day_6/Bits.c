#include<stdio.h>
int main()
{
  int n , temp , count = 0;
  printf("Enter the number: ");
  scanf("%d", &n);

  temp = n;

  while(temp > 0)
  {
    if(temp & 1){
        count++;

    }
    temp >>= 1;
  }
 printf("bit sets of %d number: %d\n", n , count);

    return 0;
}