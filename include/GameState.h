#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "PowerPlants.h"
#include "Config.h"

const int maxNumberOfPlants = 4;

class GameState 
{
    public:
        GameState();
        GameState(PowerPlant**, int);
        double getCo2Score() {return co2Score;}
        double getPriceScore() {return priceScore;}
        double getTotalDemand() {return totalDemand;}
        double getTotalSupply() {return totalSupply;}
        double getTimeValue() {return timeValue;}
        int getNumberOfPlants() {return numberOfPlants;}

        void setCo2Score(double value) {co2Score = value;}
        void setPriceScore(double value) {priceScore = value;}
        void setTotalDemand(double value) {totalDemand = value;}
        void setTotalSupply(double value) {totalSupply = value;}
        void setTimeValue(int value) {timeValue = value;}
        void setNumberOfPlants(int value) {numberOfPlants = value;}
        
        PowerPlant** getPowerPlants() {return powerPlants;} 
        void updatePowerPlants(PowerPlant**, int);
        
    private:
        double co2Score = 0;
        double priceScore = 0;
        double totalDemand = 0;
        double totalSupply = 0;
        int timeValue = 0;
        int numberOfPlants = 0;
        PowerPlant* powerPlants[maxNumberOfPlants]{nullptr}; 

};

#endif
