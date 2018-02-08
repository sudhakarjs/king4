#include<stdio.h>
int main()
{
    int b,a[50];
    scanf("%d",&n);
    int b,max;
    for(b=0;b<n;b++)
    {
        scanf("%d",&a[b]);
    }
    max=a[0];
    for(b=0;b<n;b++)
    {
        
        if(max<a[b])
        {
            max=a[b];
           // break;
        }
    }
    printf("%d",max);
    return 0;
}
