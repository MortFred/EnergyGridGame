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
    class GenericPlant : public PowerPlant
    {
            void adjustOutput(double referenceOutput) override
            {
                return;
            }
    } foo;
   std::cout<<"Hello World!"<<std::endl;
}
