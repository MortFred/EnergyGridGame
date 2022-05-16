#ifndef POWERSOURCES_H
#define POWERSOURCES_H

class PowerPlant
{
    public:
        PowerPlant() {}
        PowerPlant(double initPrice, double initCo2, double initOutput)
        {
            pricePerKwh = initPrice;
            co2PerKwh = initCo2;
            currentOutput = initOutput;
        }
        virtual ~PowerPlant() {}

        double getCurrentOutput() const {return currentOutput;}
        double getPricePerKwh() const {return pricePerKwh;}
        double getCo2PerKwh() const {return co2PerKwh;}

        void setPricePerKwh(double price) {pricePerKwh = price;}
        void setCo2PerKwh(double co2) {co2PerKwh = co2;}
        void setCurrentOutput(double output) {currentOutput = output;}

        virtual void adjustOutput(double referenceOutput) = 0;
    
    private:
        double pricePerKwh = 0;
        double co2PerKwh = 0;
        double currentOutput = 0;
};

class CoalPlant : public PowerPlant 
{
    public:
        CoalPlant() : PowerPlant() {}
        CoalPlant(double pricePerKwh, double co2PerKwh, double output) : PowerPlant(pricePerKwh, co2PerKwh, output){}
        void adjustOutput(double referenceOutput) override;
};

#endif
