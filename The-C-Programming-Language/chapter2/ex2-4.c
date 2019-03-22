#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
	char c1[] = "abcd";
	char c2[] = "bc";
	squeeze(c1, c2);
	printf("%s\n", c1);
	return 0;
}

void squeeze(char s1[], char s2[])
{
	int i, j, p;
	i = j =  p = 0;
	while (s1[i] != '\0'){
		for (j = 0; s1[i+j] == s2[j]; j++);
		if (s2[j] == '\0')
			i += j;
		else 
			s1[p++] = s1[i++];
	}
	s1[p] = '\0';
}
