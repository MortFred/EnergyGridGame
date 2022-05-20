#include "GameState.h"

GameState::GameState(PowerPlant** starterPlants)
{
    for(int i = 0; i < maxNumberOfPlants; i++)
    {
        powerPlants[i] = starterPlants[i];
    };
}