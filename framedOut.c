#include <stdio.h>
#include <string.h>

#define CORNER '+'
#define HORIZONTAL '-'
#define VERTICAL '|'

void printline(int textlen);

int frprint(char* input[], int lines) {
	int longest = 0;
	{
		int currentlen;
		for(int i = 0; i < lines; i++){
			currentlen = strlen(input[i]);
			if (currentlen > longest)
				longest = currentlen;
		}
	}
	
	//top line
	printline(longest);
	
	//text output
	for(int line = 0; line < lines; line++){
		putchar(VERTICAL);
		printf("%s", input[line]);
		for(int i = strlen(input[line]);i++ < longest; putchar(' '));
		putchar(VERTICAL);
		putchar('\n');
	}
	
	//bottom line
	printline(longest);
	
	return 0;
}

void printline(int textlen){
	putchar(CORNER);
	for(int i = 0; i++ < textlen; putchar(HORIZONTAL));
	putchar(CORNER);
	putchar('\n');
}