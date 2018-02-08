#include <stdio.h>
void main()
{
int a[20],a,j,n,temp;
printf("Enter the size of an array:");
scanf("%d",&n);
printf("Enter the elements in an array:");
for(a=0;a<n;a++)
{
scanf("%d",&a[a]);
}
{
for(j=a+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[a];
a[a]=a[j];
a[j]=temp;
}
}
}
printf("The sorted array is:");
for(a=0;a<n;a++)
{
printf("%d",a[a]);
}
}
