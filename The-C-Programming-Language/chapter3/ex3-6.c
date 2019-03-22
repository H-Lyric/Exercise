#include <stdio.h>
#define MAXLEN 100

void itoa(int n, char s[], int i);
void reverse(char s[]);

int main()
{
	char str[MAXLEN];
	int num = 123;
	itoa(num, str, 5);
	printf("string:%s\n", str);
	return 0;
}

void itoa(int n, char s[], int i)
{
	int j = 0;
	int sign;
	if ((sign = n) < 0)
		n = -n;
	do {
		s[j] = n % 10 + '0';
		j++;
	}
	while ((n /= 10) != 0);
	if (sign < 0)
		s[j++] = '-';
	while(j <= i) 
		s[j++] = ' ';
	s[j] = '\0';
	reverse(s);
}

void reverse(char s[])
{
	char c;
	int n = 0;
	while (s[n] != '\0')
		n++;
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
