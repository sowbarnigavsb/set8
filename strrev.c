#include <stdio.h>
//#include<string.h>
int main(void) {
	char str[50];
           scanf("%s",str);
         //   str1=strrev(str);
           if(str==strrev(str))
	printf("yes palindrome");
	else
	printf("no");
	return 0;
}
