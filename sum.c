#include<stdio.h>
int main()
{
    int N,i,sum=0;
    scanf("%d",&N);
    if(N>=0)
    {
        for(i=1;i<=N;i++)
        {
        sum=sum+i;
        }
    }

       else
       {
            for(i=N;i<=1;i++)
            {
            sum=sum+i;
            }
       }

      printf("%d",sum);
      return 0;


}
