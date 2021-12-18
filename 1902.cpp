// https://acm.timus.ru/problem.aspx?space=1&num=1902
// timus 1902


#include <iostream>
#include <vector>
#include <iomanip>


struct BoatsTiming
{
    int in = 0;
    int out = 0;

    double meetingMoment = 0;
    
    void set(int entryTime, int timeInChannel)
    {
        in = entryTime;
        out = entryTime + timeInChannel;
    }
};


double getIntersectionTime(BoatsTiming, BoatsTiming);


int main()
{
    int boatsNum = 0;
    std::cin >> boatsNum;

    int timeOfWay = 0;
    std:: cin >> timeOfWay;

    int timeMomentAnna = 0;
    std::cin >> timeMomentAnna;

    struct BoatsTiming Anna;
    Anna.set(timeMomentAnna, timeOfWay);
    
    std::vector <struct BoatsTiming> Boats;
    for (int i = 0; i < boatsNum; i++)
    {
        int timeMomentBoat = 0;
        std::cin >> timeMomentBoat;

        struct BoatsTiming Boat;
        Boat.set(timeMomentBoat, timeOfWay);

        Boats.push_back(Boat);
    }

    for (int i = 0; i < boatsNum; i++)
        Boats[i].meetingMoment = getIntersectionTime(Boats[i], Anna);
        

    std::cout << std::fixed << std::setprecision(6);
    for (int i = 0; i < boatsNum; i++)
    {   
        if (Boats[i].meetingMoment)
            std::cout << Boats[i].meetingMoment << std::endl;
    }
    
    return 0;
}


// Anna======in====out=============
// --------------------------------
// Boat===========in====out======== +
// Boat==in====out================= +
// Boat======in====out============= +
// Boat================in====out=== -
double getIntersectionTime(BoatsTiming Boat, BoatsTiming Anna)
{
    double time = 0;

    bool isIntersection = false;

    if ((Anna.in <= Boat.out) && (Anna.out >= Boat.in))
        isIntersection = true;

    if (isIntersection)
        time = (double)Anna.in + ((double)(Boat.out - Anna.in) / 2.0f);
    
    return time;
}
