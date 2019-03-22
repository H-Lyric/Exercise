#include <stdio.h>
#define LEN 3

int atoi(char s[]);
int lower(int c);

int main()
{
	int c;
	int n = 0;
	char ch[LEN];

//for testing atoi
/*
	while ((c = getchar()) != EOF && n < LEN){
		ch[n] = c;
		n++;
	}
	int i = atoi(ch);
	printf("%d", i);
*/

//for testing lower
	while((c = getchar()) != EOF)	
		printf("%c", lower(c));
	return 0;
}

int atoi(char s[])
{
	int i, n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else return c;
}
