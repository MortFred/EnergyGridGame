#include "GameLogic.h"
#include "iostream"

GameInstance::GameInstance()
{
    state = GameState();
}

void GameInstance::updateTime()
{
    int startTime = state.getTimeValue();
    if(startTime+1 > config::maxTime){return;}
    state.setTimeValue(startTime+1);
}

void GameInstance::setTime(int value)
{
    int startTime = state.getTimeValue();
    if(startTime+value > config::maxTime)
    {
        state.setTimeValue(config::maxTime);
        return;
    }
    state.setTimeValue(startTime+value);
}

void GameInstance::printGameState()
{
    std::cout << std::endl << "Current Co2 Score: " << this->state.getCo2Score() << std::endl;
    std::cout << "Current Price Score: " << this->state.getPriceScore() << std::endl;
    std::cout << "Current Total Demand: " << this->state.getTotalDemand() << std::endl;
    std::cout << "Current Total Supply: " << this->state.getTotalSupply() << std::endl;
    std::cout << "Current time: " << this->state.getTimeValue() << std::endl << std::endl;

    std::cout << "=== Power Plants ===" << std::endl << std::endl;
    PowerPlant** powerPlants = state.getPowerPlants();
    std::cout << *powerPlants << std::endl;
    for(int i = 0; i < this->state.getNumberOfPlants(); i++){
        std::cout << "hei" << std::endl;
        std::cout << "Plant type: " << powerPlants[i] << std::endl;
        std::cout << "Plant type: " << powerPlants[i]->getPlantType() << std::endl;
        std::cout << "Co2 intensity: " << powerPlants[i]->getCo2PerKwh() << std::endl;
    }
}