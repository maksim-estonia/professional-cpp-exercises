#include "AirlineTicket.hpp"
#include <iostream>
#include <memory>

int main() {
    AirlineTicket myTicket; // Stack-based AirlineTicket
    myTicket. setPassengerName("Sherman Socketwrench");
    myTicket.setNumberOfMiles(700);
    myTicket.setFrequentFlyerNumber(1);
    double cost = myTicket.calculatePriceInDollars();
    int FFNumber = myTicket.getFrequentFlyerNumber();
    std::cout << "This ticket will cost $" << cost << std::endl;
    std::cout << "Frequent-Flyer Number: " << FFNumber << std::endl;

    // Heap-based AirlineTicket with smart pointer
    auto myTicket2 = std::make_unique<AirlineTicket>();
    myTicket2->setPassengerName("Albus Dumbledore");
    myTicket2->setNumberOfMiles(2000);
    myTicket2->setHasEliteSuperRewardsStatus(true);
    myTicket2->setFrequentFlyerNumber(2);
    double cost2 = myTicket2->calculatePriceInDollars();
    int FFNumber2 = myTicket2->getFrequentFlyerNumber();
    std::cout << "This ticket will cost $" << cost2 << std::endl;
    std::cout << "Frequent-FLyer Number: " << FFNumber2 << std::endl;


    return EXIT_SUCCESS;
}