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

$(APP): helloworld.o framedOut.o
	$(CMPLR) helloworld.o framedOut.o -o $(APP)