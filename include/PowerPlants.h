#ifndef POWERSOURCES_H
#define POWERSOURCES_H

class PowerPlant
{
    public:
        PowerPlant() {}
        PowerPlant(double pricePerKwh, double co2PerKwh);
        virtual ~PowerPlant() {}

        double getCurrentOutput() const {return currentOutput;}
        double getPricePerKwh() const {return pricePerKwh;}
        double getCo2PerKwh() const {return co2PerKwh;}

        void setPricePerKwh(double price) {pricePerKwh = price;}
        void setCo2PerKwh(double co2) {co2PerKwh = co2;}

        virtual void adjustOutput(double referenceOutput) = 0;
    
    protected:
        void setCurrentOutput(double output) {currentOutput = output;}

    private:
        double pricePerKwh = 0;
        double co2PerKwh = 0;
        double currentOutput = 0;
};

class CoalPlant : public PowerPlant 
{
    public:
        void adjustOutput(double referenceOutput);
};

#endif