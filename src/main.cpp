#include "HelloSDL.h"
#include "HelloCpputest.h"
#include "PowerPlants.h"
#include <stdint.h>
#include <list>
#include <iostream>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <tuple>

int main() 
{
    std::cout<<"Welcome to the Energy Grid Game!"<<std::endl;
    bool quit = false;
    SDL_Event e;

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
    }
    
}
