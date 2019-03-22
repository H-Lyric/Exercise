#include <stdio.h>

#define MAXCHAR 94 //only count characters form ! to ~

int main()
{
	int c;
	int nc = 0;
	int charcount[MAXCHAR];

	for (int i = 0; i < MAXCHAR; i++)
		charcount[i] = 0;
 
	while ((c = getchar()) != EOF){
		++charcount[c-'!'];
	}

//print vertically
	
	for (int i = 0; i < MAXCHAR; i++){
		printf("%c ", i+'!');
		for (int n = 0; n < charcount[i]; n++)
			printf("*");
		printf("\n");
	}

	return 0;
}
