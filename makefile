APP = helloworld.exe
CMPLR = tcc

.PHONY: all clean fun

all: $(APP)

clean:
	rm -rf $(APP) *.o

fun:
	>8===D

helloworld.o: helloworld.c helloworld.h
	$(CMPLR) -c helloworld.c -o helloworld.o

framedOut.o: framedOut.c
	$(CMPLR) -c framedOut.c -o framedOut.o

validation.o: validation.c helloworld.h
	$(CMPLR) -c validation.c -o validation.o

prepare.o: prepare.c helloworld.h
	$(CMPLR) -c prepare.c -o prepare.o

$(APP): helloworld.o framedOut.o validation.o prepare.o
	$(CMPLR) helloworld.o framedOut.o validation.o prepare.o -o $(APP)