// https://acm.timus.ru/problem.aspx?space=1&num=2111
// timus 2111


#include <iostream>
#include <vector>

int main()
{
    long long numCities = 0;
    std::cin >> numCities;

    std::vector <long long> roadLenghts;
    long long mass = 0;
    for (long long i = 0; i < numCities; i++)
    {
        long long lenght = 0;
        std::cin >> lenght;
        roadLenghts.push_back(lenght);
        mass = mass + lenght;
    }
    
    long long tax = 0;
    for (long long i = 0; i < numCities; i++)
    {
        tax = tax + (mass * roadLenghts[i]);
        mass = mass - roadLenghts[i];
        tax = tax + (mass * roadLenghts[i]);
    }
    
    std::cout << tax;

    return 0;
}
