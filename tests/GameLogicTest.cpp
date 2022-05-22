#include "GameLogic.h"
#include "CppUTest/TestHarness.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>

TEST_GROUP(GameInstance)
{
    GameInstance game;
};

TEST(GameInstance, InitsNumberOfPlantsCorrectly)
{
    LONGS_EQUAL(game.getNumberOfPlants(), 1);
};

TEST(GameInstance, ReturnsStateCorrectly)
{
    GameState explicitState;
    LONGS_EQUAL(explicitState.getNumberOfPlants(), (game.getState()).getNumberOfPlants());
};

TEST(GameInstance, UpdatesTimeByOne)
{
    GameState& state = game.getState();
    int startTime = state.getTimeValue();
    game.updateTime();
    LONGS_EQUAL(startTime + 1, state.getTimeValue());
}

TEST(GameInstance, UpdatesTimeByN)
{
    int N = 15;
    GameState& state = game.getState();
    int startTime = state.getTimeValue();
    game.setTime(N);
    LONGS_EQUAL(startTime + N, state.getTimeValue());
}