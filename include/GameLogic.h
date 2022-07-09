#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "GameState.h"

class GameInstance
{
    public:
        GameInstance();

        int getNumberOfPlants() {return state.getNumberOfPlants();}
        GameState& getState() {return state;}

        void calculateTotalDemand();
        void calculateTotalSupply();
        void updateTime();
        void setTime(int);

        void printGameState();

    private:
        GameState state;

};

#endif
