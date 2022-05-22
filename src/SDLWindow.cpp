#include "SDLWindow.h"
#include <iostream>

SDLWindow::SDLWindow()
{
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
        success = false;
    }
    else
    {
        //Create window
        gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == nullptr )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
            success = false;
        }
        else
        {
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface( gWindow );
        }
    }
};

SDLWindow::~SDLWindow()
{
    SDL_FreeSurface( gHelloWorld );
    SDL_DestroyWindow( gWindow );

    gHelloWorld = nullptr;
    gWindow = nullptr;
    gScreenSurface = nullptr;

    SDL_Quit();
};

void SDLWindow::update()
{
    SDL_UpdateWindowSurface( gWindow );
}