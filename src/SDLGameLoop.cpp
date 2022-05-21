#include "SDLGameLoop.h"
#include "SDLWindow.h"

void SDL::gameLoop()
{
    bool quit = false;
    SDL_Event e;
    SDLWindow gameWindow;


    while(!quit)
    {
        while( SDL_PollEvent( &e ) != 0 )
        {
            //User requests quit
            if( e.type == SDL_QUIT )
            {
                quit = true;
            }
        }
        //Update the surface
        gameWindow.update();
    }

}