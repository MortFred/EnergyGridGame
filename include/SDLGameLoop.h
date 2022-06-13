#ifndef SDLGAMELOOP_H
#define SDLGAMELOOP_H

#include <SDL2/SDL.h>
#include "SDLWindow.h"

namespace SDL
{
    void gameLoop();
    bool handleEvent(SDL_Event, bool &);
    bool closeWindow(SDLWindow);
    void testFunction();
    void printStatus();
}

#endif
