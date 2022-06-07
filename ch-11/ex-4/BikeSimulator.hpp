#include <iostream>
#include "internals.hpp"

namespace Simulator
{
    class BikeSimulator 
    {
    private:
        
    public:
        BikeSimulator() {
            std::cout << "This is the BikeSimulator constructor" << std::endl;
        };
        double setOdometer(double miles) {
            return Simulator::convertMilesToKm(miles);
        };
    };
    
} // namespace Simulator

