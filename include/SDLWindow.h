#ifndef DISPLAYWINDOW_H 
#define DISPLAYWINDOW_H

#include <SDL2/SDL.h>


class SDLWindow
{
    public:
        SDLWindow();
        ~SDLWindow();
        bool loadMedia();
        void update();
    
    private:
    //The window we'll be rendering to
    SDL_Window* gWindow = nullptr;
        
    //The surface contained by the window
    SDL_Surface* gScreenSurface = nullptr;

    //The image we will load and show on the screen
    SDL_Surface* gHelloWorld = nullptr;

    const int SCREEN_WIDTH = 400;
    const int SCREEN_HEIGHT = 500;

};

#endif
