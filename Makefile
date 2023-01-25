
CC=clang
CFLAGS=-g -Wall

BIN=progbar

all:$(BIN)

%:%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	$(RM) -r $(BIN) *.o
