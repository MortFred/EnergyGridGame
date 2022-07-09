#include "PowerPlants.h"
#include "SDLGameLoop.h"
#include <stdint.h>
#include <list>
#include <iostream>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <tuple>
int main() 
{
    std::cout<<"Welcome to the Energy Grid Game!"<<std::endl;
    SDLGameLoop game_SDL = SDLGameLoop();
    game_SDL.gameLoop();
    std::cout<<"GG!"<<std::endl;
}
