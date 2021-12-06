// https://acm.timus.ru/problem.aspx?space=1&num=1607
// 1607


#include <iostream>


struct Price
{
    int startPrice;
    int deltaPrice;
};


int main()
{
    Price Passenger;
    Price TaxiDriver;

    std::cin >> Passenger.startPrice;
    std::cin >> Passenger.deltaPrice;

    std::cin >> TaxiDriver.startPrice;
    std::cin >> TaxiDriver.deltaPrice;

    bool readyToGo = false;
    int resultPrice = 0;
    int step = 0;

    while (!readyToGo)
    {
        if ((Passenger.startPrice + (Passenger.deltaPrice * step)) >= (TaxiDriver.startPrice - (TaxiDriver.deltaPrice * step)))
        {
            readyToGo = true;
            resultPrice = Passenger.startPrice + (Passenger.deltaPrice * step);
            break;
        }

        if ((TaxiDriver.startPrice - (TaxiDriver.deltaPrice * step)) <= (Passenger.startPrice + (Passenger.deltaPrice * (step + 1))))
        {
            readyToGo = true;
            resultPrice = TaxiDriver.startPrice - (TaxiDriver.deltaPrice * step);
            break;
        }

        step = step + 1;
    }
    
    std::cout << resultPrice;

    return 0;
}
