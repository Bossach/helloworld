#include <stdlib.h>
#include <string.h>
#include "helloworld.h"

char * valid(char * in){
	int maxlen = MAXW - strlen(HEAD) - strlen(TAIL) - 1;
	
	if(strlen(in) > maxlen)
		in[maxlen] = '\0';
	
	return in;
}