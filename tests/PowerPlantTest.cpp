#include "CppUTest/TestHarness.h"
#include "PowerPlants.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>

TEST_GROUP(GenericPowerPlants)
{
    PowerPlant genericPlant;
};

TEST(GenericPowerPlants, GenericPlantReturnsPrice)
{
    double price = genericPlant.getPricePerKwh();
    double initPrice = 0;
    DOUBLES_EQUAL(price, initPrice, 0.01);
}

TEST(GenericPowerPlants, GenericPlantReturnsCo2)
{
    double co2 = genericPlant.getCo2PerKwh();
    double initco2 = 0;
    DOUBLES_EQUAL(co2, initco2, 0.01);
}

TEST(GenericPowerPlants, GenericPlantReturnsCurrentOutput)
{
    double currentOutput = genericPlant.getCurrentOutput();
    double initOutput = 0;
    DOUBLES_EQUAL(currentOutput, initOutput, 0.01);
}

TEST(GenericPowerPlants, GenericPlantAdjustingOutputDoesNothing)
{
    genericPlant.adjustOutput(2);
    double initOutput = 0;
    DOUBLES_EQUAL(genericPlant.getCurrentOutput(), initOutput, 0.01);
}

TEST(GenericPowerPlants, GenericPlantSetsPriceCorrectly)
{
    double desiredPrice = 1.79;
    genericPlant.setPricePerKwh(desiredPrice);
    DOUBLES_EQUAL(desiredPrice, genericPlant.getPricePerKwh(), 0.01);
}

TEST(GenericPowerPlants, GenericPlantSetsCo2Correctly)
{
    double desiredCo2 = 4.98;
    genericPlant.setCo2PerKwh(desiredCo2);
    DOUBLES_EQUAL(desiredCo2, genericPlant.getCo2PerKwh(), 0.01);
}

TEST(GenericPowerPlants, GenericPlantSetsCurrentOutputCorrectly)
{
    double desiredOutput = 50;
    genericPlant.setCurrentOutput(desiredOutput);
    DOUBLES_EQUAL(desiredOutput, genericPlant.getCurrentOutput(), 0.01);
}
