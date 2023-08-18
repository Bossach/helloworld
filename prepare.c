#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "helloworld.h"


int prepare(char **ptr, int argc, char* argv[]){
	//creating pointer to pointer to out array (??)
	////char **ptr;
	////ptr = out;
		
	char buff[MAXW];
	
	strcpy(buff, HEAD "world" TAIL);
	
	//allocating memory for out[0]
	*ptr = (char*)malloc(strlen(buff) + 1);
	
	//copying buff to out[0]
	strcpy(*ptr, buff);
	
	for(int a = 1; a < argc; a++){
		//construct desired string
		sprintf(buff, HEAD "%s" TAIL,valid(argv[a]));
		
		//shift to next element of array[]
		ptr++;
		
		//allocating memory fot out[a]
		*ptr = (char*)malloc(strlen(buff) + 1);
		//copying string to out[a]
		strcpy(*ptr, buff);
	}
	
	return 0;
}