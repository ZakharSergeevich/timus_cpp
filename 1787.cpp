// https://acm.timus.ru/problem.aspx?space=1&num=1787
// timus 1787


#include <iostream>
#include <vector>

int main()
{
    int carPerMinCapacity = 0;
    std::cin >> carPerMinCapacity;

    int numMinutes = 0;
    std::cin >> numMinutes;

    std::vector <int> numCars;
    for (int i = 0; i < numMinutes; i++)
    {
        int cars = 0;
        std::cin >> cars;
        numCars.push_back(cars);
    }
    
    int traffic = 0;

    for (int i = 0; i < numMinutes; i++)
    {
        traffic = traffic + numCars[i];
        traffic = traffic - carPerMinCapacity;
        if (traffic < 0)     
            traffic = 0;    
    }
    
    std::cout << traffic;

    return 0;
}
