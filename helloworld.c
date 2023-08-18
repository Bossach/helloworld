#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helloworld.h"

int main(int argc, char* argv[]){
	
	char *out[argc];
	
	//prepare array
	prepare(out, argc, argv);

	//call framed output of array
	frprint(out, argc);
	
	return 0;
}