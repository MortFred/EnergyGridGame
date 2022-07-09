#include "GameState.h"
#include "Exceptions.h"

GameState::GameState()
{
    int numberOfPlants = 1;
    PowerPlant* powerPlants[maxNumberOfPlants]{nullptr};
    CoalPlant coalPlant;
    powerPlants[0] = &coalPlant;
    updatePowerPlants(powerPlants, numberOfPlants);
}

GameState::GameState(PowerPlant** starterPlants, int numberOfPlants)
{
    updatePowerPlants(starterPlants, numberOfPlants);
}

void GameState::updatePowerPlants(PowerPlant** starterPlants, int numberOfPlants)
{
    this->numberOfPlants = numberOfPlants;
    for(int i = 0; i < numberOfPlants; i++)
    {
        if (starterPlants[i] == nullptr) {
            throw InvalidPowerPlantList();
        }
        powerPlants[i] = starterPlants[i];
    };
    for(int j = numberOfPlants; j < maxNumberOfPlants;j++)
    {
        powerPlants[j] = nullptr;
    };
}
