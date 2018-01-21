#include<stdio.h>
void main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=0;n%10!=0;i++)
    {  
        n=n/10;
        s=s+1;
    }    
    printf("%d",s);    
}