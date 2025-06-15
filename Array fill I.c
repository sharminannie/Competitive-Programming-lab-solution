#include<stdio.h>
int main()
{
 int v,i,N[10];
  scanf("%d",&v);
     for(i=0;i<10;i++)
      {
      N[i]=v;
      v=2*v;
      printf("N[%d] = %d\n",i,N[i]);

       }

  return 0;
}
