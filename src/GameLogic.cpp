#include "GameLogic.h"

GameInstance::GameInstance()
{
    state = GameState();
}

void GameInstance::updateTime()
{
    int startTime = state.getTimeValue();
    state.setTimeValue(startTime+1);
}

void GameInstance::setTime(int value)
{
    int startTime = state.getTimeValue();
    state.setTimeValue(startTime+value);
}