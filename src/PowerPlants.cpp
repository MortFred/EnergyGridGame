#include "PowerPlants.h"

void CoalPlant::adjustOutput(double referenceOutput)
{
    this->setCurrentOutput(referenceOutput);
}

std::string PlantType::getString(PlantType::Type type) {
        switch (type)
        {
            case None:
                return "None";
            case Coal:
                return "Coal";
            
            default:
                break;
        }
    }  
