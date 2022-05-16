#include "HelloSDL.h"
#include "HelloCpputest.h"
#include "PowerPlants.h"
#include <stdint.h>
#include <iostream>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <tuple>

int main() 
{
    std::cout<<"Welcome to the Energy Grid Game!"<<std::endl;
    double initOutput = 2;
    double initPrice = 1.98;
    double initCo2 = 3.14;
    CoalPlant coalPlant(initPrice, initCo2, initOutput);
}
