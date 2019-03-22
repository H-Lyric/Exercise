#include <stdio.h>

void strcats(char *s, char *t);
//char s1[] = "12";
//char t1[] = "34";
//char s2[] = "56";
int main()
{
	char s1[] = "H, ";
	char t1[] = "ww";
	strcats(s1, t1);
	//printf("%s\n", s1);
	return 0;
}

void strcats(char *s, char *t)
{
	while (*s)
		s++;
	while (*s++ = *t++);
}
		
