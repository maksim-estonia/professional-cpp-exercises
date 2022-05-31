#include <string>

class AirlineTicket
{
private:
    std::string mPassengerName = "Unknown Passenger";
    int mNumberOfMiles = 0;
    bool mHasEliteSuperRewardsStatus= false;
    int mFrequentFlyerNumber = 0;
public:

    double calculatePriceInDollars() const;

    const std::string& getPassengerName() const;
    void setPassengerName(const std::string& name);

    int getNumberOfMiles() const;
    void setNumberOfMiles(int miles);

    bool hasEliteSuperRewardsStatus() const;
    void setHasEliteSuperRewardsStatus(bool status);

    int getFrequentFlyerNumber() const;
    void setFrequentFlyerNumber(int number);
};
