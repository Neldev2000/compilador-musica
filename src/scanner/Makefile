CC = gcc
CFLAGS = -I../../include/scanner
FLEX = flex
SCANNER_DIR = ../../include/scanner
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Darwin)
    FLEXLIB = -ll
else
    FLEXLIB = -lfl
endif

all: scanner

scanner: lex.yy.c main.o token.o
	$(CC) $(CFLAGS) -o scanner main.o token.o lex.yy.c $(FLEXLIB)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

token.o: token.c
	$(CC) $(CFLAGS) -c token.c

lex.yy.c: $(SCANNER_DIR)/scanner.flex
	cd $(SCANNER_DIR) && $(FLEX) scanner.flex && mv lex.yy.c ../../src/scanner/

clean:
	rm -f scanner main.o token.o lex.yy.c
	rm -f $(SCANNER_DIR)/*.o

test: scanner
	./scanner ../../test/test1.mus
	@echo "\n"
	./scanner ../../test/test2.mus

.PHONY: all clean test 