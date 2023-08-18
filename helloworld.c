#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helloworld.h"

#define BUFFSIZE 64

int main(int argc, char* argv[]){
	
	char *out[argc];
	
	char **ptr;
	ptr = out;
		
	char buff[BUFFSIZE];
	
	strcpy(buff, "Hello, world!");
	
	*ptr = (char*)malloc(strlen(buff) + 1);
	
	strcpy(*ptr, buff);
	
	for(int a = 1; a < argc; a++){
		sprintf(buff, "Hello, %s!",argv[a]);
		
		ptr++;
		*ptr = (char*)malloc(strlen(buff) + 1);
		
		strcpy(*ptr, buff);
	}

	frprint(out, argc);
	
	return 0;
}