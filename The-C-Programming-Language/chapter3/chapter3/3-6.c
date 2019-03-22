#include <stdio.h>
#define MAXLEN 100

void itoa(int n, char s[]);
void reverse(char s[]);

int main()
{
	int num = 123;
	char str[MAXLEN];
	itoa(num, str);
	printf("string:%s\n", str);
	return 0;
}

void itoa(int n, char s[])
{
	int i, sign;
	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	}
	while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

void reverse(char s[])
{
	int n = 0;
	char c;
	while (s[n] != '\0')
		n++;
	for(int i = 0, j = n - 1; i < j; i++, j--) { //s[n]=='\0'!!!!
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
