#include "SDLGameLoop.h"
#include "CppUTest/TestHarness.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>
#include <iostream>
#include "Exceptions.h"

TEST_GROUP(SDLGameLoop)
{
    SDLGameLoop gameLoop;
};

TEST(SDLGameLoop, GameQuitsWithQuitEvent)
{
    SDL_Event e;
    e.type = SDL_QUIT;
    bool quit = false;
    gameLoop.handleEvent(e, quit);
    CHECK(quit);
};

TEST(SDLGameLoop, QuitEventReleaseWindowMemory)
{
    
};
