#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "helloworld.h"


int prepare(char *out[], int argc, char* argv[]){
		
	char buff[MAXW];
	
	strcpy(buff, HEAD "world" TAIL);
	
	//allocating memory for out[0]
	out[0] = (char*)malloc(strlen(buff) + 1);
	
	//copying buff to out[0]
	strcpy(out[0], buff);
	
	for(int a = 1; a < argc; a++){
		//construct desired string
		sprintf(buff, HEAD "%s" TAIL,valid(argv[a]));
		
		//allocating memory fot out[a]
		out[a] = (char*)malloc(strlen(buff) + 1);
		//copying string to out[a]
		strcpy(out[a], buff);
	}
	
	return 0;
}