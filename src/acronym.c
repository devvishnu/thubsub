#include "acronym.h"
#include<string.h>
#include<stdio.h>
int main()
{
int k=1,i;
char st[100],st2[10];

printf("\n\nEnter The String : ");
fgets(st, sizeof(st), stdin);

st2[0]=st[0];
for(i=1;i<strlen(st);i++)
    if(st[i]==' ')
    {
    
    st[k]=st[i+1];
    k++;
    }
printf("\n\nThe ACRONYM Is : ");
for(i=0;i<k;i++)
    printf("%c",st2[i]);
 return 0;
}