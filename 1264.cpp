// https://acm.timus.ru/problem.aspx?space=1&num=1264
// timus 1264


#include <iostream>

int main()
{
    int N = 0;
    int M = 0;

    std::cin >> N;
    std::cin >> M;

    int numSeconds = 0;

    numSeconds = N * (M + 1);

    std::cout << numSeconds;

    return 0;
}
