#ifndef __HELLOWORLD__
#define __HELLOWORLD__
#define SCREENWIDTH 80
#define MAXW (SCREENWIDTH - 2)
#define HEAD "Hello, "
#define TAIL "!"

int frprint(char* input[], int lines);

char * valid(char * in);

int prepare(char *out[], int argc, char* argv[]);

#endif