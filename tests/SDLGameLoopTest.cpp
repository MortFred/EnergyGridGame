#include "SDLGameLoop.h"
#include "CppUTest/TestHarness.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>
#include <iostream>
#include "Exceptions.h"

TEST_GROUP(SDLGameLoop)
{

};

TEST(SDLGameLoop, GameQuitsWithQuitEvent)
{
    SDL_Event e;
    e.type = SDL_QUIT;
    bool quit = false;
    SDL::handleEvent(e, quit);
    CHECK(quit);
};
