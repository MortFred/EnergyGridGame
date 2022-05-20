#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <list>
#include "PowerPlants.h"

const int maxNumberOfPlants = 4;

class GameState 
{
    public:
        GameState(){}
        GameState(PowerPlant** starterPlants);
        double getCo2Score(){return co2Score;}
        double getPriceScore(){return priceScore;}
        double getTotalDemand(){return totalDemand;}
        double getTimeValue(){return timeValue;}
        PowerPlant** getPowerPlants() {return powerPlants;} 

        void setCo2Score(double value) {co2Score = value;}
        void setPriceScore(double value) {priceScore = value;}
        void setTotalDemand(double value) {totalDemand = value;}
        void setTimeValue(double value) {timeValue = value;}
        
    private:
        double co2Score = 0;
        double priceScore = 0;
        double totalDemand = 0;
        double timeValue = 0;
        PowerPlant* powerPlants[maxNumberOfPlants]; 

};

#endif
