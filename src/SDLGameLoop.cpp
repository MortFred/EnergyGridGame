#include "SDLGameLoop.h"
#include <iostream>

enum buttons
{
    TEST_BUTTON=116,
    STATUS_BUTTON=115,
    QUIT_BUTTON=113,
};

void SDLGameLoop::gameLoop()
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

bool SDLGameLoop::handleEvent(SDL_Event e, bool &quit)
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
                case QUIT_BUTTON: quit = true; return false;
            }
        }
    }
    return true;
}

bool SDLGameLoop::closeWindow(SDLWindow gameWindow)
{
    return true;
}

void SDLGameLoop::testFunction(){
    std::cout<<"test"<<std::endl;
}

void SDLGameLoop::printStatus(){
    std::cout<<"status"<<std::endl;
    game.printGameState();
}