#include "CppUTest/TestHarness.h"
#include "PowerPlants.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>

TEST_GROUP(PowerPlants)
{
    class GenericPlant : public PowerPlant
    {
            void adjustOutput(double referenceOutput) override
            {
                return;
            }
    } foo;

    void setup()
    {

        // GenericPlant foo;
    }

    void teardown()
    {
        // Un-init stuff
    }
};

TEST(PowerPlants, GenericPlantReturnsPrice)
{
    double price = foo.getPricePerKwh();
    double initPrice = 0;
    LONGS_EQUAL(price, initPrice);
}