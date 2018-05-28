CC = gcc
CFLAGS  = -Wall -Werror

.PHONY: clean

default: bin/IrregularVerbs

bin/IrregularVerbs: build/main.o build/BeginGame.o build/ChangeVariables.o build/CheckVerb.o build/GenerateIrregularVerb.o build/Options.o build/ShowPanel.o build/TableFunctions.o bin
	$(CC) $(CFLAGS) build/main.o build/BeginGame.o build/ChangeVariables.o build/CheckVerb.o build/GenerateIrregularVerb.o build/Options.o build/ShowPanel.o build/TableFunctions.o -o bin/chessvizual

build/main.o: src/main.c src/Functions.h build
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

build/BeginGame.o: src/BeginGame.c src/Functions.h build
	$(CC) $(CFLAGS) -c src/BeginGame.c -o build/BeginGame.o

build/CheckVerb.o: src/CheckVerb.c src/Functions.h build
	$(CC) $(CFLAGS) -c src/CheckVerb.c -o build/CheckVerb.o

build/ChangeVariables.o: src/ChangeVariables.c src/Functions.h build
	$(CC) $(CFLAGS) -c src/ChangeVariables.c -o build/ChangeVariables.o

build/GenerateIrregularVerb.o: src/GenerateIrregularVerb.c src/Functions.h build
	$(CC) $(CFLAGS) -c src/GenerateIrregularVerb.c -o build/GenerateIrregularVerb.o

build/Options.o: src/Options.c src/Functions.h build
	$(CC) $(CFLAGS) -c src/Options.c -o build/Options.o

build/ShowPanel.o: src/ShowPanel.c src/Functions.h build
	$(CC) $(CFLAGS) -c src/ShowPanel.c -o build/ShowPanel.o

build/TableFunctions.o: src/TableFunctions.c src/Functions.h build
	$(CC) $(CFLAGS) -c src/TableFunctions.c -o build/TableFunctions.o

build:
	mkdir build

bin:
	mkdir bin

clean:
	rm -rf build bin
