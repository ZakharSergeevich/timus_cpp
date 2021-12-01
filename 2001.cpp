// https://acm.timus.ru/problem.aspx?space=1&num=2001
// timus 2001


#include <iostream>

int main()
{
    int grossMass[2] = {0, 0};
    int fitstFull[2] = {0, 0};
    int secondFull[2] = {0, 0};

    int netMass[2] = {0, 0};

    for (int i = 0; i < 2; i++)
        std::cin >> grossMass[i];

    for (int i = 0; i < 2; i++)
        std::cin >> fitstFull[i];

    for (int i = 0; i < 2; i++)
        std::cin >> secondFull[i];
    
    netMass[0] = grossMass[0] - secondFull[0];
    netMass[1] = grossMass[1] - fitstFull[1];

    for (int i = 0; i < 2; i++)
        std::cout << netMass[i] << ' ';

    return 0;
}
