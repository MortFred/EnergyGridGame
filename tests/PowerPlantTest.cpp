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
    LONGS_EQUAL(price, initPrice);
}

TEST(PowerPlants, GenericPlantReturnsCo2)
{
    double co2 = genericPlant.getCo2PerKwh();
    double initco2 = 0;
    LONGS_EQUAL(co2, initco2);
}

TEST(PowerPlants, GenericPlantReturnsCurrentOutput)
{
    double currentOutput = genericPlant.getCurrentOutput();
    double initOutput = 0;
    LONGS_EQUAL(currentOutput, initOutput);
}

TEST(PowerPlants, GenericPlantAdjustingOutputDoesNothing)
{
    genericPlant.adjustOutput(2);
    double initOutput = 0;
    LONGS_EQUAL(genericPlant.getCurrentOutput(), initOutput);
}

TEST(PowerPlants, CoalPlantAdjustsOutput)
{

    double desiredOutput = 2;
    coalPlant.adjustOutput(desiredOutput);
    LONGS_EQUAL(genericPlant.getCurrentOutput(), desiredOutput);
}