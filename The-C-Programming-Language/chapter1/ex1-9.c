#include <stdio.h>

int main()
{
	int c1;
	int c2 = NONBLANK;
	while ((c1 = getchar()) != EOF){
		if ((c1 != ' ') || (c2 != ' ')){
			putchar(c1);
			c2 = c1;
		}
	}
	return 0;
} 
