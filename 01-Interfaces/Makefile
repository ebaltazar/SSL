SOURCE	= TablaDeConversion.c Conversion.c
BIN	= TablaDeConversion.exe
OBJ	= TablaDeConversion.o Conversion.o
CC	= gcc
CFLAGS	= -std=c99 -Wall

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

run: $(BIN)
	$(BIN)

$(OBJ): $(SOURCE)
	$(CC) -c $(SOURCE) $(CFLAGS)
