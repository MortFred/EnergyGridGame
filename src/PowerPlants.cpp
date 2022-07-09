#include "PowerPlants.h"

void PowerPlant::adjustOutput(double referenceOutput) 
{
    switch (this->plantType)
    {
        case PlantType::None:
            break;

        default:
            break;
    }
}

std::string PlantType::getString(PlantType::Type type) 
{
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
