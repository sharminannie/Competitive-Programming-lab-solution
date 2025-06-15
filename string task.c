#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
char s[100];
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
    if(s[i]!='A'&& s[i]!='E'&& s[i]!='I'&& s[i]!='O'&& s[i]!='U'&& s[i]!='Y'&& s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'&& s[i]!='y')
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
       printf(".%c",s[i]);
    }
}
return 0;
}
