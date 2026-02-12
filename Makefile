CC=gcc
CFLAGS=-Wall

SRC=main.c

CLI_Calculator:
	$(CC) $(CFLAGS) $(SRC) -o main
