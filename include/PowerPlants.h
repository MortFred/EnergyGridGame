#ifndef POWERSOURCES_H
#define POWERSOURCES_H

class PowerPlant
{
    public:
        PowerPlant();
        PowerPlant(double pricePerKwh, double co2PerKwh);
        double getCurrentOutput() const;
        virtual void adjustOutput(double referenceOutput);
        ~PowerPlant();
    
    protected:
        double pricePerKwh;
        double co2PerKwh;
        double currentOutput;
};

#endif

// {pricePerKwh = 0; co2PerKwh = 0; currentOutput = 0;}