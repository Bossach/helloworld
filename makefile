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

$(APP): helloworld.o framedOut.o validation.o
	$(CMPLR) helloworld.o framedOut.o validation.o -o $(APP)