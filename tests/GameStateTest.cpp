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

TEST(GameState, GameStateInitsSinglePowerPlantList)
{
    PowerPlant powerPlants[maxNumberOfPlants];
    powerPlants[0] = PowerPlant(PlantType::Coal);
    GameState state_new(powerPlants, 1);
    UNSIGNED_LONGS_EQUAL(1, state_new.getPowerPlants()[0].getPlantType());

    for (int i = 1; i<maxNumberOfPlants; i++)
    {
        UNSIGNED_LONGS_EQUAL(0, state_new.getPowerPlants()[i].getPlantType());
    }
};

// TEST(GameState, InitTwoPlantsWithOnlyOneInListReturnsException)
// {
//     int numberOfPlants = 2;
//     PowerPlant* powerPlants[maxNumberOfPlants]{nullptr};
//     CoalPlant coalPlant;
//     powerPlants[0] = &coalPlant;
//     CHECK_THROWS(InvalidPowerPlantList, new GameState(powerPlants, numberOfPlants));
// };

// TEST(GameState, InitTwoPlantsSetsNumberOfPlantsVariable)
// {
//     int numberOfPlants = 2;
//     PowerPlant* powerPlants[maxNumberOfPlants]{nullptr};
//     CoalPlant coalPlant;
//     powerPlants[0] = &coalPlant;
//     powerPlants[1] = &coalPlant;
//     GameState state_new(powerPlants, 2);
//     LONGS_EQUAL(numberOfPlants, state_new.getNumberOfPlants());
// };
