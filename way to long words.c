#include<stdio.h>
#include<string.h>
int main()
{
    int N,i,l;
    char s[100];
    scanf("%d",&N);
    for(i=0;i<N; i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if(l>10){
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
        }
        else {
            printf("%s\n",s);

        }
    }
    return 0;

}
