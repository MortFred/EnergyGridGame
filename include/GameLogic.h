#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "GameState.h"

class GameInstance
{
    public:
        GameInstance();
        int getNumberOfPlants() {return state.getNumberOfPlants();}
        void updateTime();
        void setTime(int);
        GameState getState() {return state;}

    private:
        GameState state;

};

#endif