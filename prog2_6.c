#include<stdio.h>
void main()
{
    int n,r,i,j,c=0,f;
    scanf("%d%d",&n,&r);
    for(i=n;i<=r;i++)
    {
      for(j=2; j<=i/2; ++j)
      {
          f=0;
         if(i%j==0)
         {
           f=1;
           break;
         }
      }
      if(f==0)
        c++;
    }
    printf("%d",c);
}