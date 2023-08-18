#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helloworld.h"

int main(int argc, char* argv[]){
	
	char *out[argc];
	
	char **ptr;
	ptr = out;
		
	char buff[MAXW];
	
	strcpy(buff, HEAD "world" TAIL);
	
	*ptr = (char*)malloc(strlen(buff) + 1);
	
	strcpy(*ptr, buff);
	
	for(int a = 1; a < argc; a++){
		sprintf(buff, HEAD "%s" TAIL,valid(argv[a]));
		
		ptr++;
		*ptr = (char*)malloc(strlen(buff) + 1);
		
		strcpy(*ptr, buff);
	}

	frprint(out, argc);
	
	return 0;
}