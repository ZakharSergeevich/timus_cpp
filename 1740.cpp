// https://acm.timus.ru/problem.aspx?space=1&num=1740
// timus 1740


#include <iostream>
#include <iomanip>

int main()
{
    int l = 0;
    int k = 0;
    int h = 0;

    std::cin >> l;
    std::cin >> k;
    std::cin >> h;

    double timeMin = 0;
    double timeMax = 0;

    timeMin = l / k * h;
    timeMax = timeMin;

    if (l % k != 0)
        timeMax = timeMax + h;

    std::cout << std::fixed << std::setprecision(8);
    std::cout << timeMin << std::endl;
    std::cout << timeMax << std::endl;

    return 0;
}
