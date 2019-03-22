#include <stdio.h>

int main()
{
	printf("unsigned char %u\n", (unsigned char) ~0);
	printf("signed char max %d\n", (signed char)((unsigned char) ~0 >> 1));
	printf("signed char min %d\n", -(signed char)((unsigned char) ~0 >> 1));
	return 0;
}
