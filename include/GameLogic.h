#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "GameState.h"

class GameInstance
{
    public:
        GameInstance();
        int getNumberOfPlants() {return state.getNumberOfPlants();}

    private:
        GameState state;

};

#endif