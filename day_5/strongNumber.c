#include<stdio.h>
int main()
{
 int i, fact , n , realnum , rem , sum  = 0;
 printf("Enter the number: ");
 scanf("%d",&n);

    realnum = n;
    while(n > 0)
    {
     rem = n %10;
     fact = 1;
    for(i = 1;i<= rem;i++)
     {

        fact *= i;

     }
     sum += fact;
     n /= 10;
    }
    if(sum == realnum)
    {
        printf("%d is a strong number",realnum);
    }
    else{
        printf("%d is not a strong number",realnum);
    }



    return 0;
}