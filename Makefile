CC=clang
CFLAGS=-Wall -g
LDLIBS=-lreadline
RM=rm -rf
OUT=clisp

all: build

build: lisp.o
	$(CC) $(LDLIBS) $(CFLAGS) -o $(OUT) lisp.c
	$(RM) *.o

debug: CFLAGS+=-DDEBUG_ON
debug: build

lisp.o: lisp.c
	$(CC) $(CFLAGS) -c lisp.c

.PHONY: clean
clean:
	$(RM) *.o $(OUT)
