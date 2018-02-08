
#include<stdio.h>
void main()
{
int arr[100],a,n,size,temp,largest;
printf("\n enter the size of the array:");
scanf("%d",&size);
for(a=0;a<size;a++)
{
scanf("%d",&a[a]);
}
largest=a[0];
for(a=0;a<size;a++)
{
if(largest<a[a])
{
largest=a[a];
}
}
printf("\n%d",largest);
getch();
}
