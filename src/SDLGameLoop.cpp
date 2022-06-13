#include "SDLGameLoop.h"
#include <iostream>

enum buttons
{
    TEST_BUTTON=116,
    STATUS_BUTTON=115
};

void SDL::gameLoop()
{
    bool quit = false;
    
    SDL_Event e;
    SDLWindow gameWindow;


    while(!quit)
    {
        while( SDL_PollEvent( &e ) != 0 )
        {
            handleEvent(e, quit);
        }
        //Update the surface
        gameWindow.update();
    }

}

bool SDL::handleEvent(SDL_Event e, bool &quit)
{
    switch(e.type)
    {
        case SDL_QUIT: quit = true; return false;
        case SDL_KEYDOWN:
        {
            std::cout<<e.key.keysym.sym<<std::endl;
            switch(e.key.keysym.sym)
            {
                case TEST_BUTTON: testFunction(); break;
                case STATUS_BUTTON: printStatus(); break;
            }
        }
    }
    return true;
}

bool SDL::closeWindow(SDLWindow gameWindow)
{
    return true;
}

void SDL::testFunction(){
    std::cout<<"test"<<std::endl;
}

void SDL::printStatus(){
    std::cout<<"status"<<std::endl;
}