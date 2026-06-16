#include<stdio.h>
int main()
{
 int a[100],n , i , j =0 ,temp[100];
 printf("Enter size: ");
 scanf("%d",&n);

 printf("Enter elements:\n ");
 for(i=0;i<n;i++)
 {
    scanf("%d", &a[i]);
  if(a[i] != 0)
     temp[j++] = a[i];  
 }
  while(j<n)
    temp[j++] = 0;

printf("Array after moving zeroes:\n");
for(i=0;i<n;i++)
   printf("%d\n", temp[i]);

    return 0;
}