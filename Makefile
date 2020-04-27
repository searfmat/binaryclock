INCLUDE: -I ~/include -lsense

LDFLAGS:= -L ~/lib -lsense -lm

all: clock
clock: main.o display.o
	cc -o clock main.o display.o $(LDFLAGS)

clean:
	rm -f *.o clock
main.o: main.c display.h
	cc -c main.c -I ~/include -lsense
display.o: display.c display.h
	cc -c display.c -I ~/include -lsense
run:
	bash clock.sh | ./clock

