#ifndef POWERSOURCES_H
#define POWERSOURCES_H

#include <string>

namespace PlantType {
    enum Type {
        None,
        Coal,  
    };

    std::string getString(Type type);  
}

class PowerPlant
{
    public:
        PowerPlant() {}
        PowerPlant(PlantType::Type type) {plantType = type;}
        PowerPlant(double initPrice, double initCo2, double initOutput, PlantType::Type type)
        {
            pricePerKwh = initPrice;
            co2PerKwh = initCo2;
            currentOutput = initOutput;
            plantType = type;
        }
        ~PowerPlant() {}

        double getCurrentOutput() const {return currentOutput;}
        double getPricePerKwh() const {return pricePerKwh;}
        double getCo2PerKwh() const {return co2PerKwh;}
        std::string getPlantTypeString() const {return PlantType::getString(plantType);}
        int getPlantType() const {return plantType;}

        void setPricePerKwh(double price) {pricePerKwh = price;}
        void setCo2PerKwh(double co2) {co2PerKwh = co2;}
        void setCurrentOutput(double output) {currentOutput = output;}

        void adjustOutput(double referenceOutput);
    
    private:
        PlantType::Type plantType = PlantType::None;
        double pricePerKwh = 0;
        double co2PerKwh = 0;
        double currentOutput = 0;
};

#endif
