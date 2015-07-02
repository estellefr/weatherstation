.PHONY: clean

all: weatherstation

weatherstation: RPI.o weatherstation.c
	gcc -g weatherstation.c RPI.o -o weatherstation

clean:
	rm -f *.o weatherstation *.*~

