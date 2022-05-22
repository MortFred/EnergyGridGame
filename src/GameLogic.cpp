#include "GameLogic.h"

GameInstance::GameInstance()
{
    int numberOfPlants = 1;
    PowerPlant* powerPlants[maxNumberOfPlants]{nullptr};
    CoalPlant coalPlant;
    powerPlants[0] = &coalPlant;
    state = GameState(powerPlants, numberOfPlants);
}

// GameInstance::