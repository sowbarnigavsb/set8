#include <stdio.h>

int main(void) {
	int a,b,c,i,count=0;
	scanf("%d%d",&a,&b);
	c=a*b;
	for(i=1;i<=c;i++)
	{
		if(c/i==i)
		count++;
	}
	if(count==1)
	printf("Perfect square");
	else
	printf("not perfect square");
	
	// your code goes here
	return 0;
}
