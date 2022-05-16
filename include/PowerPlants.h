#ifndef POWERSOURCES_H
#define POWERSOURCES_H

class PowerPlant
{
    public:
        PowerPlant() {};
        PowerPlant(double pricePerKwh, double co2PerKwh);
        double getCurrentOutput() const {return currentOutput;};
        double getPricePerKwh() const {return pricePerKwh;};
        double getCo2PerKwh() const {return co2PerKwh;};
        virtual void adjustOutput(double referenceOutput) = 0;
        virtual ~PowerPlant() {};
    
    protected:
        double pricePerKwh = 0;
        double co2PerKwh = 0;
        double currentOutput = 0;
};

#endif

// {pricePerKwh = 0; co2PerKwh = 0; currentOutput = 0;}