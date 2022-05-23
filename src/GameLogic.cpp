#include "GameLogic.h"

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