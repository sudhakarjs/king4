#include <stdio.h>
#include<conio.h>
void main() 
{
int i,k,j,n;
printf("enter the number:");
scanf("%d",&i);
int b[a];
for(k=1;k<=i;k++)
{
scanf("%d",&b[k]);	
}
for(k=1;k<=i;k++)
{
	
for(j=k+1;j<=i;j++)
{
	
if(b[k]>b[j])
{
	n=b[k];
	b[k]=b[j];
	b[j]=n;
}
}
}
printf("\n Output\n %d",b[(i/2+1)]);
getch();
}
