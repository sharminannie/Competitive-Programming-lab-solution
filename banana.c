#include<stdio.h>
int main()
{
    long long int k,n,w,i,sum=0,x;
    scanf("%lld %lld %lld",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum+=i*k;
    }
    x=sum-n;
    if(x<0)
      printf("0");
      else
      printf("%lld",x);
      return 0;
}
