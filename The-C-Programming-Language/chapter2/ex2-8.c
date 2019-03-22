#include <stdio.h>

int rightrot(int x ,int n);

int main()
{
	int x1 = 221;
	int n1 = 5;
	printf("%d\n", rightrot(x1, n1));
	return 0;
}
//wrong
int rightrot(int x, int n)
{
	int tmp = 0;
	for (int i = 0; i < n; i++){
		if(x & (~(~0 << 1)))
			x = ~(~x >> 1);
		else x = x >> 1;
	}
	return x;
}

