#include <stdio.h>
#define LEN 4

int htoi(char s[]);

int main()
{
	int c;
	char ch[LEN] = "0000"; 
	int i = 0;
	while ((c = getchar()) != EOF && i < LEN ){
		ch[i] = c;
		i++;
	}
	printf("%d\n", htoi(ch));
	
	return 0;
}

int htoi(char s[])
{
	int i;
	int n = 0;
	for (i = 0; i < LEN; i++){
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 'a';
	}
	for (i = 0; i < LEN; i++){
		if (s[i] == '0' && s[i+1] == 'x')
			i += 2;
		if (s[i] >= 'a' && s[i] <= 'f')
			n = 16 * n + s[i] - 'a' + 10;
		if (s[i] >= '0' && s[i] <= '9')
			 n = 16 * n + s[i] - '0';
	}
	return n;
}
				
