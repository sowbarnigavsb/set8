#include <stdio.h>
//#include<string.h>
int main(void) {
	char s[50],count=0,i;
           scanf("%s",&s);
           for(i=0;s[i]!='\0';i++)
           {
           if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
           count++;
           }
           if(count>=1)
	printf("yes");
	else
	printf("no");
	return 0;
}
