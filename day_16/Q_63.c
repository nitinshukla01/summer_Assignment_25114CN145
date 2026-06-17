#include<stdio.h>
int main()
{
 int  a[100],n , i , j , sum = 0,total = 0;
 printf("Enter size: ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
    scanf("%d", &a[i]);
 }
 printf("Enter sum: ");
 scanf("%d",&sum);

 for(i=0;i<n;i++)
 {
    for(j=i;j<n;j++)
    {
        if(a[i] + a[j] == sum)
          printf("%d %d\n",a[i], a[j]);
    }
 }
    
    return 0;
}