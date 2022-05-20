#include "GameState.h"
#include "CppUTest/TestHarness.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>
#include <iostream>

TEST_GROUP(GameState)
{
    GameState state;
};

TEST(GameState, GameStateInitsCo2Correctly)
{
    DOUBLES_EQUAL(0, state.getCo2Score(), 0.01);
};

TEST(GameState, GameStateInitsPriceCorrectly)
{
    DOUBLES_EQUAL(0, state.getPriceScore(), 0.01);
};

TEST(GameState, GameStateInitsTimeValueCorrectly)
{
    DOUBLES_EQUAL(0, state.getTimeValue(), 0.01);
};

TEST(GameState, GameStateInitsTotalDemandCorrectly)
{
    DOUBLES_EQUAL(0, state.getTotalDemand(), 0.01);
};

TEST(GameState, GameStateInitsNoPowerPlantsByDefault)
{
    for (int i = 0; i<maxNumberOfPlants; i++)
    {
        POINTERS_EQUAL(nullptr, state.getPowerPlants()[i]);
    }
};

TEST(GameState, GameStateInitsSinglePowerPlant)
{
    PowerPlant* powerPlants[maxNumberOfPlants]{nullptr};
    CoalPlant coalPlant;
    powerPlants[0] = &coalPlant;
    GameState state_new(powerPlants);
    POINTERS_EQUAL(&coalPlant, state_new.getPowerPlants()[0]);

    for (int i = 1; i<maxNumberOfPlants; i++)
    {
        POINTERS_EQUAL(nullptr, state_new.getPowerPlants()[i]);
    }
};
