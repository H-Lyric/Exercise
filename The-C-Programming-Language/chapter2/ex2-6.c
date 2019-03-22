#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main()
{
	int x1 = 221;
	int p1 = 6;
	int n1 = 5;
	int y1 = 6;
	printf("%d\n", setbits(x1, p1, n1, y1));
	return 0;
}

int setbits(int x, int p, int n, int y)
{
	return (x & ~((~(~0 << n)) << (p - n + 1))) | ((y & ~(~0 << n)) << (p - n + 1)) ;
}
