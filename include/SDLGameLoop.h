#ifndef SDLGAMELOOP_H
#define SDLGAMELOOP_H

#include <SDL2/SDL.h>
#include "SDLWindow.h"
#include "GameLogic.h"

class SDLGameLoop
{
    public:
        void gameLoop();
        bool handleEvent(SDL_Event, bool &);
        bool closeWindow(SDLWindow);
        void testFunction();
        void printStatus();

    private:
        GameInstance game;
};

#endif
