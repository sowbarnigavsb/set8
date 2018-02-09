#include <stdio.h>

int main(void) {
            char s[50],i,l=0;
	scanf("%s",&s);
           for(i=0;s[i]!='\0';i++)
           l++;
           s[l/2]='*';
            for(i=0;s[i]!='\0';i++)
           printf("%c",s[i]);
           return 0;
}
