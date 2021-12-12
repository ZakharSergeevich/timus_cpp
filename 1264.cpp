// https://acm.timus.ru/problem.aspx?space=1&num=1264
// timus 1264


#include <iostream>

int main()
{
    int arraySize = 0;
    int numFromZero = 0;

    std::cin >> arraySize;
    std::cin >> numFromZero;

    int amountOfNum = numFromZero + 1;
    int numSeconds = arraySize * amountOfNum;

    std::cout << numSeconds;

    return 0;
}
