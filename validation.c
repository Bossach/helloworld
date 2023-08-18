#include <stdlib.h>
#include <string.h>

char * valid(char * in){
	int i;
	if(strlen(in) > 64 - 9)
		in[64 - 9] = '\0';
	
	return in;
}