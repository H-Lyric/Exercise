#include <stdio.h>
#define MAXLEN 100
#define HEX 16
#define DEC 10
#define OCT 8
#define BIN 2

void itob(int n, char s[], int i);
void reverse(char s[]);

int main()
{
	int num = 123;
	char hex[MAXLEN];
	char dec[MAXLEN];
	char oct[MAXLEN];
	char bin[MAXLEN];
	itob(num, hex, HEX);
	itob(num, dec, DEC);
	itob(num, oct, OCT);
	itob(num, bin, BIN);
	printf("hex:%s, dec:%s, oct:%s, bin:%s\n", hex, dec, oct, bin);
	return 0;
}

void itob(int n, char s[], int i)
{
	int sign;
	int j = 0;
	if ((sign = n) < 0)
		n = -n;
	do {
		if (n % i <= 9)
			s[j++] = n % i + '0';
		else
			s[j++] = n % i - 10 + 'A';
	}
	while ((n /= i) > 0); //">" is higher than "/=", () is necessary
	s[j] = '\0';
	reverse(s);
}

void reverse(char s[])
{
	int n = 0;
	char c;
	while (s[n] != '\0')
		n++;
	for(int i = 0, j = n - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
