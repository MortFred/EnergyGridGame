#include "CppUTest/TestHarness.h"
#include "PowerPlants.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>

TEST_GROUP(PowerPlants)
{
    class GenericPlant : public PowerPlant
    {
        public:
            void adjustOutput(double referenceOutput) override
            {
                return;
            }
    } genericPlant;

    CoalPlant coalPlant;

};

TEST(PowerPlants, GenericPlantReturnsPrice)
{
    double price = genericPlant.getPricePerKwh();
    double initPrice = 0;
    DOUBLES_EQUAL(price, initPrice, 0.01);
}

TEST(PowerPlants, GenericPlantReturnsCo2)
{
    double co2 = genericPlant.getCo2PerKwh();
    double initco2 = 0;
    DOUBLES_EQUAL(co2, initco2, 0.01);
}

TEST(PowerPlants, GenericPlantReturnsCurrentOutput)
{
    double currentOutput = genericPlant.getCurrentOutput();
    double initOutput = 0;
    DOUBLES_EQUAL(currentOutput, initOutput, 0.01);
}

TEST(PowerPlants, GenericPlantAdjustingOutputDoesNothing)
{
    genericPlant.adjustOutput(2);
    double initOutput = 0;
    DOUBLES_EQUAL(genericPlant.getCurrentOutput(), initOutput, 0.01);
}

TEST(PowerPlants, GenericPlantSetsPrice)
{
    double desiredPrice = 1.79;
    genericPlant.setPricePerKwh(desiredPrice);
    DOUBLES_EQUAL(desiredPrice, genericPlant.getPricePerKwh(), 0.01);
}

TEST(PowerPlants, GenericPlantSetsCo2)
{
    double desiredCo2 = 4.98;
    genericPlant.setCo2PerKwh(desiredCo2);
    DOUBLES_EQUAL(desiredCo2, genericPlant.getCo2PerKwh(), 0.01);
}

TEST(PowerPlants, CoalPlantAdjustsOutput)
{
    double desiredOutput = 2;
    coalPlant.adjustOutput(desiredOutput);
    DOUBLES_EQUAL(desiredOutput, coalPlant.getCurrentOutput(), 0.01);
}