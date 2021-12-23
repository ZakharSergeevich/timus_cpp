// https://acm.timus.ru/problem.aspx?space=1&num=1964
// timus 1964


#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    unsigned long long populationNum = 0;
    int dialectsNum = 0;

    std::vector <unsigned long long> dialects;

    std::cin >> populationNum;
    std::cin >> dialectsNum;

    for (int i = 0; i < dialectsNum; i++)
    {
        long long dialect = 0;
        std::cin >> dialect;
        dialects.push_back(dialect);
    }

    unsigned long long dialectsSum = accumulate(dialects.begin(), dialects.end(), 0);
    long long totalNum = dialectsSum - populationNum * (dialectsNum - 1);

    if (totalNum < 0)
        std::cout << 0;
    else
        std::cout << totalNum;

    return 0;
}
