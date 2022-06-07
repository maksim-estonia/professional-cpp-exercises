#include <iostream>
#include "internals.hpp"

namespace Simulator
{
    class CarSimulator
    {
    private:
        
    public:
        CarSimulator() {
            std::cout << "This is the CarSimulator constructor" << std::endl;
        };
        double toOdometer(double miles) {
            return Simulator::convertMilesToKm(miles);
        };
    };
    
} // namespace Simulator
