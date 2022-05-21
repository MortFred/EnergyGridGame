SRC_DIR = ./src
TEST_DIR = ./tests
IDIR = ./include
ODIR = $(SRC_DIR)/obj
LDIR =./lib

CC=c++
CPPFLAGS= -I$(IDIR) -I$(IDIR)/util -std=c++17 -stdlib=libc++
LINKER_FLAGS= -lSDL2 -lm

src/obj/main.o: src/main.cpp include/PowerPlants.h include/GameState.h include/GameLogic.h include/DisplayWindow.h
	$(CC) -c -o $@ src/main.cpp $(CPPFLAGS)

src/obj/PowerPlants.o: src/PowerPlants.cpp include/PowerPlants.h
	$(CC) -c -o $@ src/PowerPlants.cpp $(CPPFLAGS)

src/obj/GameState.o: src/GameState.cpp include/GameState.h
	$(CC) -c -o $@ src/GameState.cpp $(CPPFLAGS)

src/obj/GameLogic.o: src/GameLogic.cpp include/GameLogic.h
	$(CC) -c -o $@ src/GameLogic.cpp $(CPPFLAGS)

src/obj/DisplayWindow.o: src/DisplayWindow.cpp include/DisplayWindow.h
	$(CC) -c -o $@ src/DisplayWindow.cpp $(CPPFLAGS)

test:
	make -C $(TEST_DIR)

test_clean:
	make -C $(TEST_DIR) clean

game: src/obj/main.o src/obj/PowerPlants.o
	$(CC) -o $@ $^ $(LINKER_FLAGS)

all: test game

.PHONY: clean
clean: test_clean
	rm -f *.o $(ODIR)/*.o game
