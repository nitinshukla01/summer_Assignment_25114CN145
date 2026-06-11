#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<=1)
      return 0;
    
      for(i=2;i<n;i++)
      {
        if(n%i == 0)
        return 0;
      }
   return 1;

}
int main()
{
  int n;
  scanf("%d", &n);
  if(prime(n))
      printf("prime Numbrer");
  else
      printf(" Not prime number");    

    return 0;
}