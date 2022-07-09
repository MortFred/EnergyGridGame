#include "GameState.h"
#include "Exceptions.h"

GameState::GameState()
{
    this->numberOfPlants = 0;
    for (int i = 0; i < maxNumberOfPlants; i++)
    {
        this->powerPlants[i] = PowerPlant(PlantType::None);
    }
}

GameState::GameState(PowerPlant* starterPlants, int numberOfPlants)
{
    this->numberOfPlants = numberOfPlants;
    for (int i = 0; i < numberOfPlants; i++)
    {
        this->powerPlants[i] = starterPlants[i];
    }
}
