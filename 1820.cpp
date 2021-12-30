// https://acm.timus.ru/problem.aspx?space=1&num=1820
// timus 1820


#include <iostream>

int main()
{
    int beefsNum = 0;
    int capacity = 0;

    std::cin >> beefsNum;
    std::cin >> capacity;

    int time = 0;

    if (beefsNum <= capacity)
        time = 2;
    
    else
        time = (2 * beefsNum + capacity - 1) / capacity;

    std::cout << time;

    return 0;
}
