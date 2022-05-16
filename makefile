SRC_DIR = ./src
TEST_DIR = ./tests
IDIR = ./include
ODIR = $(SRC_DIR)/obj
LDIR =./lib

CC=c++
CPPFLAGS= -I$(IDIR) -I$(IDIR)/util -std=c++17 -stdlib=libc++
LINKER_FLAGS= -lSDL2 -lm

src/obj/main.o: src/main.cpp include/HelloCpputest.h include/HelloSDL.h include/PowerSources.h
	$(CC) -c -o $@ src/main.cpp $(CPPFLAGS)

src/obj/HelloSDL.o: src/HelloSDL.cpp include/HelloSDL.h
	$(CC) -c -o $@ src/HelloSDL.cpp $(CPPFLAGS)

src/obj/PowerSources.o: src/PowerSources.cpp include/PowerSources.h
	$(CC) -c -o $@ src/PowerSources.cpp $(CPPFLAGS)

test:
	make -C $(TEST_DIR)

test_clean:
	make -C $(TEST_DIR) clean

game: src/obj/main.o src/obj/HelloSDL.o
	$(CC) -o $@ $^ $(LINKER_FLAGS)

all: test game

.PHONY: clean
clean: test_clean
	rm -f *.o $(ODIR)/*.o game
