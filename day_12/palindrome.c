#include<stdio.h>
int palindrome(int n)
{
int rev = 0,temp = n, rem;
 while(temp != 0)
 {
     rem = temp % 10; 
     rev = rev * 10 + rem;
     temp /= 10;
 }
    return (rev == n);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(palindrome(n))
      printf("%d is palindrome number",n);
    else
      printf("%d is not palindrome number",n);  
    

    return 0;
}