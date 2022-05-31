#include "AirlineTicket.hpp"

double AirlineTicket::calculatePriceInDollars() const
{
    if (hasEliteSuperRewardsStatus()) {
        // Elite Super Rewards customers fly for free
        return 0;
    }
    return getNumberOfMiles() * 0.1;
}

const std::string& AirlineTicket::getPassengerName() const
{
    return mPassengerName;
}

void AirlineTicket::setPassengerName(const std::string& name)
{
    mPassengerName = name;
}

int AirlineTicket::getNumberOfMiles() const
{
    return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles)
{
    mNumberOfMiles = miles;
}

bool AirlineTicket::hasEliteSuperRewardsStatus() const
{
    return mHasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status)
{
    mHasEliteSuperRewardsStatus = status;
}

int AirlineTicket::getFrequentFlyerNumber() const
{
    return mFrequentFlyerNumber;
}

void AirlineTicket::setFrequentFlyerNumber(int number)
{
    mFrequentFlyerNumber = number;
}