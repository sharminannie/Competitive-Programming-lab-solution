#include<stdio.h>
int main()
{
    int T,i,j,t1,t2;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d %d",&i,&j,&t1,&t2);

    if(i+j==t1+t2 || i-j==t1-t2)
{
    printf("1\n");
}

    else
    {
        printf("0\n");
    }
    }
    return 0;
}
