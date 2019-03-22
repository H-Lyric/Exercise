#include <stdio.h>

int main()
{
	int c;
	while ((c = getchar()) != EOF){
		if (c == '\t'){
			putchar('\\');
			putchar('t'); // these can be replaced by printf("\\t");
		}
		else putchar(c);
	}
	return 0;
}
