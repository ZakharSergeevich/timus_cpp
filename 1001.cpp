// https://acm.timus.ru/problem.aspx?space=1&num=1001
// timus 1001


#include <iostream>
#include <vector>
#include <iomanip>
#include <math.h>

int main()
{
    long long num = 0;
    std::vector<long long> arrayNum;

    while (std::cin >> num)
    {
        arrayNum.push_back(num);
    }

    int sizeArray = arrayNum.size();
    for (int i = 0; i < sizeArray; i++)
    {
        double sqNum = sqrt(arrayNum[sizeArray - i - 1]);
        std::cout << std::fixed << std::setprecision(4);
        std::cout << sqNum << std::endl;
    }

    return 0;
}
