#include <stdio.h>

#define OUT 0
#define IN 1
#define MAXWORD 10

int main()
{
	int c;
	int nc = 0;
	int state = OUT;
	int wordlen[MAXWORD];

	for (int i = 0; i < MAXWORD; i++)
		wordlen[i] = 0;
 
	while ((c = getchar()) != EOF){
		//if (c == ' ' || c == '\t' || c == '\n'){
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			state == OUT;
			if (nc != 0 && nc <= MAXWORD)
				 ++wordlen[nc-1];
			nc = 0;
		}
		else{
			state == IN;
			++nc;
		}
	}
//print vertically
/*	
	for (int i = 0; i < MAXWORD; i++){
		for (int n = 0; n < wordlen[i]; n++)
			printf("*");
		printf("\n");
	}
*/

//print horizontally
	int maxindex = 0;
	for (int i = 1; i < MAXWORD; i++)
		if (wordlen[i] > wordlen[maxindex]) maxindex = i;

	int word[MAXWORD][wordlen[maxindex]];
	for (int i = wordlen[maxindex]; i > 0; i--){
		for (int j = 0; j < MAXWORD; j++)
			if (wordlen[j] >= i)
				printf("*");
			else printf(" ");
		printf("\n");
	}
	return 0;
}
