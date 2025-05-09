#include <stdio.h>
#include <string.h>
int main()
{
    char str[20],revstr[20];
    int i,j,len;
    printf("Enter name:");
    scanf("%s", str);
    j=0;
    len=strlen(str);

    for(i=len-1;i>=0;i--)
    {
        revstr[j++]=str[i];
    }
    revstr[i]='\0';
    printf("after reversing the string:%s",revstr);

    return 0;
}