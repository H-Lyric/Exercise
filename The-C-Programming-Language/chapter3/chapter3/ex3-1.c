#include <stdio.h>
#define LEN 9

int binsearch(int x ,int v[], int n);

int main()
{
	int x1 = 6;
	int v1[LEN];
	for (int i = 0; i < LEN; i++)
		v1[i] = i;
	printf("%d\n", binsearch(x1, v1, LEN));
}

int binsearch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	mid = (low + high) / 2;
	while (low <= high && x != v[mid]) {
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
		mid = (low + high) / 2;
	}
	if (x == v[mid])
		return mid;
	else
		return -1;
}
