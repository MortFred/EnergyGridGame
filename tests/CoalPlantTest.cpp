#include "CppUTest/TestHarness.h"
#include "PowerPlants.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>

TEST_GROUP(CoalPowerPlant)
{
    double initPrice = 1;
    double initCo2 = 2;
    double initOutput = 3;
    CoalPlant coalPlant;

    void setup()
    {
        coalPlant.setPricePerKwh(initPrice);
        coalPlant.setCo2PerKwh(initCo2);
        coalPlant.setCurrentOutput(initOutput);
    }
};

TEST(CoalPowerPlant, CoalPlantSetsPriceCorrectly)
{
    DOUBLES_EQUAL(initPrice, coalPlant.getPricePerKwh(), 0.01);
};

TEST(CoalPowerPlant, CoalPlantSetsCo2Correctly)
{
    DOUBLES_EQUAL(initCo2, coalPlant.getCo2PerKwh(), 0.01);
};

TEST(CoalPowerPlant, CoalPlantSetsOutputCorrectly)
{
    DOUBLES_EQUAL(initOutput, coalPlant.getCurrentOutput(), 0.01);
};

TEST(CoalPowerPlant, CoalPlantCanBeInstantiated)
{
    CoalPlant instantiatedCoalPlant(initPrice, initCo2, initOutput);
    DOUBLES_EQUAL(initPrice, instantiatedCoalPlant.getPricePerKwh(), 0.01);
    DOUBLES_EQUAL(initCo2, instantiatedCoalPlant.getCo2PerKwh(), 0.01);
    DOUBLES_EQUAL(initOutput, instantiatedCoalPlant.getCurrentOutput(), 0.01);
    UNSIGNED_LONGS_EQUAL(PlantType::Coal, instantiatedCoalPlant.getPlantType());
}
