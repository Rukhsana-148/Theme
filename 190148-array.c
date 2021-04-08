#include<stdio.h>
main()
{
 int Array[90], n, i, value, position;
 printf("Enter the Value of Elements Number\n");
 scanf("%d", &n);
 printf("Enter %d elements\n", n);
for(i=0;i<n;i++)
{
    scanf("%d", &Array[i]);
}
 printf("Enter the position\n");
 scanf("%d", &position);
 printf("Enter the value\n");
 scanf("%d", &value);
 for(i=n-1;i>=position-1;i--)
 {
     Array[i+1]=Array[i];
 }
 Array[position-1]=value;
 printf("Recent Array is:\n");
 for(i=0;i<=n;i++)
 {
     printf("%d\n", Array[i]);
 }
}
