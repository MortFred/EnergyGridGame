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

TEST(GameInstance, InitsNumberPlantList)
{
    LONGS_EQUAL(game.getNumberOfPlants(), 1);
};