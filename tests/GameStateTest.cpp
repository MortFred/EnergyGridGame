#include "GameState.h"
#include "CppUTest/TestHarness.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>
#include <iostream>
#include "Exceptions.h"

TEST_GROUP(GameState)
{
    GameState state;

    void setup()
    {

    }
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

TEST(GameState, GameStateInitsOneCoalPlantByDefault)
{
    LONGS_EQUAL((*state.getPowerPlants()[0]).getCurrentOutput(), 0);
    for (int i = 1; i<maxNumberOfPlants; i++)
    {
        POINTERS_EQUAL(nullptr, state.getPowerPlants()[i]);
    }
};

TEST(GameState, GameStateInitsSinglePowerPlantList)
{
    PowerPlant* powerPlants[maxNumberOfPlants]{nullptr};
    CoalPlant coalPlant;
    powerPlants[0] = &coalPlant;
    GameState state_new(powerPlants, 1);
    POINTERS_EQUAL(&coalPlant, state_new.getPowerPlants()[0]);

    for (int i = 1; i<maxNumberOfPlants; i++)
    {
        POINTERS_EQUAL(nullptr, state_new.getPowerPlants()[i]);
    }
};

TEST(GameState, InitTwoPlantsWithOnlyOneInListReturnsException)
{
    int numberOfPlants = 2;
    PowerPlant* powerPlants[maxNumberOfPlants]{nullptr};
    CoalPlant coalPlant;
    powerPlants[0] = &coalPlant;
    CHECK_THROWS(InvalidPowerPlantList, new GameState(powerPlants, numberOfPlants));
};

TEST(GameState, InitTwoPlantsSetsNumberOfPlantsVariable)
{
    int numberOfPlants = 2;
    PowerPlant* powerPlants[maxNumberOfPlants]{nullptr};
    CoalPlant coalPlant;
    powerPlants[0] = &coalPlant;
    powerPlants[1] = &coalPlant;
    GameState state_new(powerPlants, 2);
    LONGS_EQUAL(numberOfPlants, state_new.getNumberOfPlants());
};
