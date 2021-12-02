// https://acm.timus.ru/problem.aspx?space=1&num=1409
// 1409


#include<iostream>

int main()
{
    int Harry = 0;
    int Larry = 0;

    std::cin >> Harry;
    std::cin >> Larry;

    int notHarry = 0;
    int notLarry = 0;

    notHarry = Larry - 1;
    notLarry = Harry - 1;

    std::cout << notHarry << ' ';
    std::cout << notLarry;

    return 0;
}
