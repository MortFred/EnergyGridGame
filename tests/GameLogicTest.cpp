#include "GameLogic.h"
#include "CppUTest/TestHarness.h"
#include "RuntimeErrorStub.h"
#include <stdexcept>

TEST_GROUP(GameLogic)
{
    GameInstance game;
};

// TEST(GameLogic, GameInstanceInitsCorrectly)
// {
//     game.
//     DOUBLES_EQUAL(currentOutput, initOutput, 0.01);
// };