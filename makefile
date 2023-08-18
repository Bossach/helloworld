APP = helloworld.exe
CMPLR = tcc

.PHONY: all clean

all: $(APP)

clean:
	rm -rf $(APP) *.o

helloworld.o: helloworld.c helloworld.h
	$(CMPLR) -c helloworld.c -o helloworld.o

framedOut.o: framedOut.c
	$(CMPLR) -c framedOut.c -o framedOut.o

validation.o: validation.c
	$(CMPLR) -c validation.c -o validation.o

prepare.o: prepare.c
	$(CMPLR) -c prepare.c -o prepare.o

$(APP): helloworld.o framedOut.o validation.o prepare.o
	$(CMPLR) helloworld.o framedOut.o validation.o prepare.o -o $(APP)