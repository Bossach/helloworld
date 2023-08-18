#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helloworld.h"

#define BUFFSIZE 64

int main(int argc, char* argv[]){
	
	char *out[argc];
	
	//creating pointer to pointer to out array (??)
	char **ptr;
	ptr = out;
		
	char buff[BUFFSIZE];
	
	strcpy(buff, "Hello, world!");
	
	//allocating memory for out[0]
	*ptr = (char*)malloc(strlen(buff) + 1);
	
	//copying buff to out[0]
	strcpy(*ptr, buff);
	
	for(int a = 1; a < argc; a++){
		//construct desired string
		sprintf(buff, "Hello, %s!",argv[a]);
		
		//shift to next element of out[]
		ptr++;
		
		//allocating memory fot out[a]
		*ptr = (char*)malloc(strlen(buff) + 1);
		//copying string to out[a]
		strcpy(*ptr, buff);
	}

	//call framed output of array
	frprint(out, argc);
	
	return 0;
}